// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComputerVision_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	COMPUTERVISION_API UFunction* Z_Construct_UDelegateFunction_ComputerVision_OnHandDataReceived__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ComputerVision;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ComputerVision()
	{
		if (!Z_Registration_Info_UPackage__Script_ComputerVision.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_ComputerVision_OnHandDataReceived__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/ComputerVision",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0xCD6B27B0,
			0x8C716CA9,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ComputerVision.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_ComputerVision.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ComputerVision(Z_Construct_UPackage__Script_ComputerVision, TEXT("/Script/ComputerVision"), Z_Registration_Info_UPackage__Script_ComputerVision, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xCD6B27B0, 0x8C716CA9));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
