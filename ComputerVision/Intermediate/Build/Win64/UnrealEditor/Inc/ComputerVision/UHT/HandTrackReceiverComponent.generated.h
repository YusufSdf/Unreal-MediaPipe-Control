// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HandTrackReceiverComponent.h"

#ifdef COMPUTERVISION_HandTrackReceiverComponent_generated_h
#error "HandTrackReceiverComponent.generated.h already included, missing '#pragma once' in HandTrackReceiverComponent.h"
#endif
#define COMPUTERVISION_HandTrackReceiverComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnHandDataReceived ***************************************************
#define FID_UnrealProjects_ComputerVision_Source_ComputerVision_HandTrackReceiverComponent_h_11_DELEGATE \
COMPUTERVISION_API void FOnHandDataReceived_DelegateWrapper(const FMulticastScriptDelegate& OnHandDataReceived, bool bIsDetected, float PinchRatio, FVector2D ScreenPosition);


// ********** End Delegate FOnHandDataReceived *****************************************************

// ********** Begin Class UHandTrackReceiverComponent **********************************************
struct Z_Construct_UClass_UHandTrackReceiverComponent_Statics;
COMPUTERVISION_API UClass* Z_Construct_UClass_UHandTrackReceiverComponent_NoRegister();

#define FID_UnrealProjects_ComputerVision_Source_ComputerVision_HandTrackReceiverComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHandTrackReceiverComponent(); \
	friend struct ::Z_Construct_UClass_UHandTrackReceiverComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPUTERVISION_API UClass* ::Z_Construct_UClass_UHandTrackReceiverComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UHandTrackReceiverComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ComputerVision"), Z_Construct_UClass_UHandTrackReceiverComponent_NoRegister) \
	DECLARE_SERIALIZER(UHandTrackReceiverComponent)


#define FID_UnrealProjects_ComputerVision_Source_ComputerVision_HandTrackReceiverComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHandTrackReceiverComponent(UHandTrackReceiverComponent&&) = delete; \
	UHandTrackReceiverComponent(const UHandTrackReceiverComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHandTrackReceiverComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHandTrackReceiverComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHandTrackReceiverComponent) \
	NO_API virtual ~UHandTrackReceiverComponent();


#define FID_UnrealProjects_ComputerVision_Source_ComputerVision_HandTrackReceiverComponent_h_13_PROLOG
#define FID_UnrealProjects_ComputerVision_Source_ComputerVision_HandTrackReceiverComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ComputerVision_Source_ComputerVision_HandTrackReceiverComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ComputerVision_Source_ComputerVision_HandTrackReceiverComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHandTrackReceiverComponent;

// ********** End Class UHandTrackReceiverComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ComputerVision_Source_ComputerVision_HandTrackReceiverComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
