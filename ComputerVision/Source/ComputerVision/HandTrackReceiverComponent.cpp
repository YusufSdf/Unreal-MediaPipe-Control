#include "HandTrackReceiverComponent.h"

#include "Components/LightComponent.h"
#include "Common/UdpSocketBuilder.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"

UHandTrackReceiverComponent::UHandTrackReceiverComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
}

void UHandTrackReceiverComponent::BeginPlay()
{
    Super::BeginPlay();

    // 127.0.0.1:5005 üzerinde Non-blocking dinleyici baþlat
    FIPv4Address LocalAddr;
    FIPv4Address::Parse(TEXT("127.0.0.1"), LocalAddr);
    FIPv4Endpoint Endpoint(LocalAddr, ListenPort);

    ListenSocket = FUdpSocketBuilder(TEXT("MediaPipe_UDP_Receiver"))
        .AsNonBlocking()
        .AsReusable()
        .BoundToEndpoint(Endpoint)
        .WithReceiveBufferSize(65536);

    if (ListenSocket)
    {
        UE_LOG(LogTemp, Log, TEXT("HandTrackReceiver: UDP Socket %d portunda dinleniyor."), ListenPort);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("HandTrackReceiver: UDP Socket olusturulamadi!"));
    }
}

void UHandTrackReceiverComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    ProcessIncomingPackets();

    // Ekrana canlý veri yazdýrma (Key: 1 ayný satýrý günceller)
    if (GEngine)
    {
        FString DebugMsg = FString::Printf(TEXT("Hand: %s | Pinch: %.2f"),
            bHandDetected ? TEXT("YES") : TEXT("NO"), CurrentPinchRatio);
        GEngine->AddOnScreenDebugMessage(1, 0.0f, bHandDetected ? FColor::Green : FColor::Red, DebugMsg);
    }

    if (AActor* OwnerActor = GetOwner())
    {
        if (ULightComponent* LightComp = OwnerActor->FindComponentByClass<ULightComponent>())
        {
            float TargetIntensity = bHandDetected ? FMath::Lerp(0.0f, MaxLumen, CurrentPinchRatio) : 0.0f;
            float CurrentIntensity = LightComp->Intensity;
            float NewIntensity = FMath::FInterpTo(CurrentIntensity, TargetIntensity, DeltaTime, 10.0f);

            LightComp->SetIntensity(NewIntensity);
        }
    }
}

void UHandTrackReceiverComponent::ProcessIncomingPackets()
{
    if (!ListenSocket) return;

    uint32 PendingSize = 0;
    while (ListenSocket->HasPendingData(PendingSize))
    {
        TArray<uint8> ReceivedData;
        ReceivedData.SetNumUninitialized(PendingSize);

        int32 BytesRead = 0;
        TSharedRef<FInternetAddr> Sender = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();

        if (ListenSocket->RecvFrom(ReceivedData.GetData(), ReceivedData.Num(), BytesRead, *Sender) && BytesRead > 0)
        {
            // Byte dizisini UTF-8 Stringe çevir
            FString ReceivedJson = FString(UTF8_TO_TCHAR(reinterpret_cast<const char*>(ReceivedData.GetData())));
            ReceivedJson.LeftInline(BytesRead);

            ParseJsonPayload(ReceivedJson);
        }
    }
}

void UHandTrackReceiverComponent::ParseJsonPayload(const FString& JsonStr)
{
    TSharedPtr<FJsonObject> JsonObject;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonStr);

    if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
    {
        bHandDetected = JsonObject->GetBoolField(TEXT("detected"));
        CurrentPinchRatio = JsonObject->GetNumberField(TEXT("pinch_ratio"));

        NormalizedFingerPos.X = JsonObject->GetNumberField(TEXT("index_x"));
        NormalizedFingerPos.Y = JsonObject->GetNumberField(TEXT("index_y"));

        // Event yayýný (dinleyen baþka sistemler varsa tetikler)
        OnHandDataReceived.Broadcast(bHandDetected, CurrentPinchRatio, NormalizedFingerPos);
    }
}

void UHandTrackReceiverComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);

    // Soketi temiz kapat
    if (ListenSocket)
    {
        ListenSocket->Close();
        ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->DestroySocket(ListenSocket);
        ListenSocket = nullptr;
        UE_LOG(LogTemp, Log, TEXT("HandTrackReceiver: UDP Socket kapatildi."));
    }
}