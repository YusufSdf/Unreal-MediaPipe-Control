#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Networking.h"
#include "Sockets.h"
#include "SocketSubsystem.h"
#include "HandTrackReceiverComponent.generated.h"

// Blueprint ve C++ event dinleyicileri için Delegate
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnHandDataReceived, bool, bIsDetected, float, PinchRatio, FVector2D, ScreenPosition);

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class COMPUTERVISION_API UHandTrackReceiverComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UHandTrackReceiverComponent();

protected:
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    UPROPERTY(EditAnywhere)
    float MaxLumen = 5000;

    // Dinlenecek UDP Portu (Editör Details panelinden deðiþtirilebilir)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hand Tracking|Network")
    int32 ListenPort = 5005;

    // Gelen filtrelenmiþ veriler (Blueprint'ten okunabilir)
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hand Tracking|Data")
    bool bHandDetected = false;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hand Tracking|Data")
    float CurrentPinchRatio = 0.0f;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hand Tracking|Data")
    FVector2D NormalizedFingerPos = FVector2D::ZeroVector;

    // C++ ve Blueprint Event Yayýný
    UPROPERTY(BlueprintAssignable, Category = "Hand Tracking|Events")
    FOnHandDataReceived OnHandDataReceived;

private:
    FSocket* ListenSocket = nullptr;

    void ProcessIncomingPackets();
    void ParseJsonPayload(const FString& JsonStr);
};