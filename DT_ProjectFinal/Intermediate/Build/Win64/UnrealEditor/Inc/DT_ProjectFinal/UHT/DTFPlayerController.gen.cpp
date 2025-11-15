// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Manager/PlayerController/DTFPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDTFPlayerController() {}

// ********** Begin Cross Module References ********************************************************
DT_PROJECTFINAL_API UClass* Z_Construct_UClass_ADTFPlayerController();
DT_PROJECTFINAL_API UClass* Z_Construct_UClass_ADTFPlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_DT_ProjectFinal();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADTFPlayerController *****************************************************
void ADTFPlayerController::StaticRegisterNativesADTFPlayerController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADTFPlayerController;
UClass* ADTFPlayerController::GetPrivateStaticClass()
{
	using TClass = ADTFPlayerController;
	if (!Z_Registration_Info_UClass_ADTFPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DTFPlayerController"),
			Z_Registration_Info_UClass_ADTFPlayerController.InnerSingleton,
			StaticRegisterNativesADTFPlayerController,
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
	return Z_Registration_Info_UClass_ADTFPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_ADTFPlayerController_NoRegister()
{
	return ADTFPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADTFPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Manager/PlayerController/DTFPlayerController.h" },
		{ "ModuleRelativePath", "Manager/PlayerController/DTFPlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADTFPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADTFPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_DT_ProjectFinal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADTFPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADTFPlayerController_Statics::ClassParams = {
	&ADTFPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADTFPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ADTFPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADTFPlayerController()
{
	if (!Z_Registration_Info_UClass_ADTFPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADTFPlayerController.OuterSingleton, Z_Construct_UClass_ADTFPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADTFPlayerController.OuterSingleton;
}
ADTFPlayerController::ADTFPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADTFPlayerController);
ADTFPlayerController::~ADTFPlayerController() {}
// ********** End Class ADTFPlayerController *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_PlayerController_DTFPlayerController_h__Script_DT_ProjectFinal_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADTFPlayerController, ADTFPlayerController::StaticClass, TEXT("ADTFPlayerController"), &Z_Registration_Info_UClass_ADTFPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADTFPlayerController), 710867690U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_PlayerController_DTFPlayerController_h__Script_DT_ProjectFinal_3988375060(TEXT("/Script/DT_ProjectFinal"),
	Z_CompiledInDeferFile_FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_PlayerController_DTFPlayerController_h__Script_DT_ProjectFinal_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_PlayerController_DTFPlayerController_h__Script_DT_ProjectFinal_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
