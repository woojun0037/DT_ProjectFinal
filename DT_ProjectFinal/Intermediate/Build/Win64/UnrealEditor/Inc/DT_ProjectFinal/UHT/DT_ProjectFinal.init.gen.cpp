// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDT_ProjectFinal_init() {}
	DT_PROJECTFINAL_API UFunction* Z_Construct_UDelegateFunction_DT_ProjectFinal_OnPartsSpawned__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DT_ProjectFinal;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DT_ProjectFinal()
	{
		if (!Z_Registration_Info_UPackage__Script_DT_ProjectFinal.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DT_ProjectFinal_OnPartsSpawned__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DT_ProjectFinal",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE03D3DE7,
				0x85712F24,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DT_ProjectFinal.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DT_ProjectFinal.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DT_ProjectFinal(Z_Construct_UPackage__Script_DT_ProjectFinal, TEXT("/Script/DT_ProjectFinal"), Z_Registration_Info_UPackage__Script_DT_ProjectFinal, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE03D3DE7, 0x85712F24));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
