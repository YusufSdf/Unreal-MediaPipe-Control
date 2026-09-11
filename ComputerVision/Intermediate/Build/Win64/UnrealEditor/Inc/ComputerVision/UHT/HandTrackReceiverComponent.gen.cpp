// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComputerVision/HandTrackReceiverComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeHandTrackReceiverComponent() {}

// ********** Begin Cross Module References ********************************************************
COMPUTERVISION_API UClass* Z_Construct_UClass_UHandTrackReceiverComponent();
COMPUTERVISION_API UClass* Z_Construct_UClass_UHandTrackReceiverComponent_NoRegister();
COMPUTERVISION_API UFunction* Z_Construct_UDelegateFunction_ComputerVision_OnHandDataReceived__DelegateSignature();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_ComputerVision();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnHandDataReceived ***************************************************
struct Z_Construct_UDelegateFunction_ComputerVision_OnHandDataReceived__DelegateSignature_Statics
{
	struct _Script_ComputerVision_eventOnHandDataReceived_Parms
	{
		bool bIsDetected;
		float PinchRatio;
		FVector2D ScreenPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint ve C++ event dinleyicileri i\xef\xbf\xbdin Delegate\n" },
#endif
		{ "ModuleRelativePath", "HandTrackReceiverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint ve C++ event dinleyicileri i\xef\xbf\xbdin Delegate" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnHandDataReceived constinit property declarations *******************
	static void NewProp_bIsDetected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDetected;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PinchRatio;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnHandDataReceived constinit property declarations *********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnHandDataReceived Property Definitions ******************************
void Z_Construct_UDelegateFunction_ComputerVision_OnHandDataReceived__DelegateSignature_Statics::NewProp_bIsDetected_SetBit(void* Obj)
{
	((_Script_ComputerVision_eventOnHandDataReceived_Parms*)Obj)->bIsDetected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ComputerVision_OnHandDataReceived__DelegateSignature_Statics::NewProp_bIsDetected = { "bIsDetected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ComputerVision_eventOnHandDataReceived_Parms), &Z_Construct_UDelegateFunction_ComputerVision_OnHandDataReceived__DelegateSignature_Statics::NewProp_bIsDetected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ComputerVision_OnHandDataReceived__DelegateSignature_Statics::NewProp_PinchRatio = { "PinchRatio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ComputerVision_eventOnHandDataReceived_Parms, PinchRatio), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ComputerVision_OnHandDataReceived__DelegateSignature_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ComputerVision_eventOnHandDataReceived_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ComputerVision_OnHandDataReceived__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ComputerVision_OnHandDataReceived__DelegateSignature_Statics::NewProp_bIsDetected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ComputerVision_OnHandDataReceived__DelegateSignature_Statics::NewProp_PinchRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ComputerVision_OnHandDataReceived__DelegateSignature_Statics::NewProp_ScreenPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ComputerVision_OnHandDataReceived__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnHandDataReceived Property Definitions ********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ComputerVision_OnHandDataReceived__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ComputerVision, nullptr, "OnHandDataReceived__DelegateSignature", 	Z_Construct_UDelegateFunction_ComputerVision_OnHandDataReceived__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ComputerVision_OnHandDataReceived__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_ComputerVision_OnHandDataReceived__DelegateSignature_Statics::_Script_ComputerVision_eventOnHandDataReceived_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ComputerVision_OnHandDataReceived__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ComputerVision_OnHandDataReceived__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ComputerVision_OnHandDataReceived__DelegateSignature_Statics::_Script_ComputerVision_eventOnHandDataReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ComputerVision_OnHandDataReceived__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ComputerVision_OnHandDataReceived__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHandDataReceived_DelegateWrapper(const FMulticastScriptDelegate& OnHandDataReceived, bool bIsDetected, float PinchRatio, FVector2D ScreenPosition)
{
	struct _Script_ComputerVision_eventOnHandDataReceived_Parms
	{
		bool bIsDetected;
		float PinchRatio;
		FVector2D ScreenPosition;
	};
	_Script_ComputerVision_eventOnHandDataReceived_Parms Parms;
	Parms.bIsDetected=bIsDetected ? true : false;
	Parms.PinchRatio=PinchRatio;
	Parms.ScreenPosition=ScreenPosition;
	OnHandDataReceived.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnHandDataReceived *****************************************************

// ********** Begin Class UHandTrackReceiverComponent **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UHandTrackReceiverComponent;
UClass* UHandTrackReceiverComponent::GetPrivateStaticClass()
{
	using TClass = UHandTrackReceiverComponent;
	if (!Z_Registration_Info_UClass_UHandTrackReceiverComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("HandTrackReceiverComponent"),
			Z_Registration_Info_UClass_UHandTrackReceiverComponent.InnerSingleton,
			StaticRegisterNativesUHandTrackReceiverComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UHandTrackReceiverComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UHandTrackReceiverComponent_NoRegister()
{
	return UHandTrackReceiverComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHandTrackReceiverComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "HandTrackReceiverComponent.h" },
		{ "ModuleRelativePath", "HandTrackReceiverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLumen_MetaData[] = {
		{ "Category", "HandTrackReceiverComponent" },
		{ "ModuleRelativePath", "HandTrackReceiverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ListenPort_MetaData[] = {
		{ "Category", "Hand Tracking|Network" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Dinlenecek UDP Portu (Edit\xef\xbf\xbdr Details panelinden de\xef\xbf\xbdi\xef\xbf\xbdtirilebilir)\n" },
#endif
		{ "ModuleRelativePath", "HandTrackReceiverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dinlenecek UDP Portu (Edit\xef\xbf\xbdr Details panelinden de\xef\xbf\xbdi\xef\xbf\xbdtirilebilir)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHandDetected_MetaData[] = {
		{ "Category", "Hand Tracking|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gelen filtrelenmi\xef\xbf\xbd veriler (Blueprint'ten okunabilir)\n" },
#endif
		{ "ModuleRelativePath", "HandTrackReceiverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gelen filtrelenmi\xef\xbf\xbd veriler (Blueprint'ten okunabilir)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPinchRatio_MetaData[] = {
		{ "Category", "Hand Tracking|Data" },
		{ "ModuleRelativePath", "HandTrackReceiverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalizedFingerPos_MetaData[] = {
		{ "Category", "Hand Tracking|Data" },
		{ "ModuleRelativePath", "HandTrackReceiverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHandDataReceived_MetaData[] = {
		{ "Category", "Hand Tracking|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// C++ ve Blueprint Event Yay\xef\xbf\xbdn\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "HandTrackReceiverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "C++ ve Blueprint Event Yay\xef\xbf\xbdn\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UHandTrackReceiverComponent constinit property declarations **************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLumen;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ListenPort;
	static void NewProp_bHandDetected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHandDetected;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentPinchRatio;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalizedFingerPos;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHandDataReceived;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UHandTrackReceiverComponent constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHandTrackReceiverComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UHandTrackReceiverComponent_Statics

// ********** Begin Class UHandTrackReceiverComponent Property Definitions *************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHandTrackReceiverComponent_Statics::NewProp_MaxLumen = { "MaxLumen", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHandTrackReceiverComponent, MaxLumen), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLumen_MetaData), NewProp_MaxLumen_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHandTrackReceiverComponent_Statics::NewProp_ListenPort = { "ListenPort", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHandTrackReceiverComponent, ListenPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ListenPort_MetaData), NewProp_ListenPort_MetaData) };
void Z_Construct_UClass_UHandTrackReceiverComponent_Statics::NewProp_bHandDetected_SetBit(void* Obj)
{
	((UHandTrackReceiverComponent*)Obj)->bHandDetected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHandTrackReceiverComponent_Statics::NewProp_bHandDetected = { "bHandDetected", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHandTrackReceiverComponent), &Z_Construct_UClass_UHandTrackReceiverComponent_Statics::NewProp_bHandDetected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHandDetected_MetaData), NewProp_bHandDetected_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHandTrackReceiverComponent_Statics::NewProp_CurrentPinchRatio = { "CurrentPinchRatio", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHandTrackReceiverComponent, CurrentPinchRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPinchRatio_MetaData), NewProp_CurrentPinchRatio_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHandTrackReceiverComponent_Statics::NewProp_NormalizedFingerPos = { "NormalizedFingerPos", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHandTrackReceiverComponent, NormalizedFingerPos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalizedFingerPos_MetaData), NewProp_NormalizedFingerPos_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHandTrackReceiverComponent_Statics::NewProp_OnHandDataReceived = { "OnHandDataReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHandTrackReceiverComponent, OnHandDataReceived), Z_Construct_UDelegateFunction_ComputerVision_OnHandDataReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHandDataReceived_MetaData), NewProp_OnHandDataReceived_MetaData) }; // 3199324342
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHandTrackReceiverComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandTrackReceiverComponent_Statics::NewProp_MaxLumen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandTrackReceiverComponent_Statics::NewProp_ListenPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandTrackReceiverComponent_Statics::NewProp_bHandDetected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandTrackReceiverComponent_Statics::NewProp_CurrentPinchRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandTrackReceiverComponent_Statics::NewProp_NormalizedFingerPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandTrackReceiverComponent_Statics::NewProp_OnHandDataReceived,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHandTrackReceiverComponent_Statics::PropPointers) < 2048);
// ********** End Class UHandTrackReceiverComponent Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UHandTrackReceiverComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ComputerVision,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHandTrackReceiverComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHandTrackReceiverComponent_Statics::ClassParams = {
	&UHandTrackReceiverComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHandTrackReceiverComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHandTrackReceiverComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHandTrackReceiverComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHandTrackReceiverComponent_Statics::Class_MetaDataParams)
};
void UHandTrackReceiverComponent::StaticRegisterNativesUHandTrackReceiverComponent()
{
}
UClass* Z_Construct_UClass_UHandTrackReceiverComponent()
{
	if (!Z_Registration_Info_UClass_UHandTrackReceiverComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHandTrackReceiverComponent.OuterSingleton, Z_Construct_UClass_UHandTrackReceiverComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHandTrackReceiverComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UHandTrackReceiverComponent);
UHandTrackReceiverComponent::~UHandTrackReceiverComponent() {}
// ********** End Class UHandTrackReceiverComponent ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ComputerVision_Source_ComputerVision_HandTrackReceiverComponent_h__Script_ComputerVision_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHandTrackReceiverComponent, UHandTrackReceiverComponent::StaticClass, TEXT("UHandTrackReceiverComponent"), &Z_Registration_Info_UClass_UHandTrackReceiverComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHandTrackReceiverComponent), 3387974422U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealProjects_ComputerVision_Source_ComputerVision_HandTrackReceiverComponent_h__Script_ComputerVision_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ComputerVision_Source_ComputerVision_HandTrackReceiverComponent_h__Script_ComputerVision_3884366387{
	TEXT("/Script/ComputerVision"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ComputerVision_Source_ComputerVision_HandTrackReceiverComponent_h__Script_ComputerVision_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ComputerVision_Source_ComputerVision_HandTrackReceiverComponent_h__Script_ComputerVision_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
