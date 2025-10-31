// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Manager/DTFUIManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDTFUIManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DT_PROJECTFINAL_API UClass* Z_Construct_UClass_UDTFUIManager();
DT_PROJECTFINAL_API UClass* Z_Construct_UClass_UDTFUIManager_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_DT_ProjectFinal();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDTFUIManager ************************************************************
void UDTFUIManager::StaticRegisterNativesUDTFUIManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDTFUIManager;
UClass* UDTFUIManager::GetPrivateStaticClass()
{
	using TClass = UDTFUIManager;
	if (!Z_Registration_Info_UClass_UDTFUIManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DTFUIManager"),
			Z_Registration_Info_UClass_UDTFUIManager.InnerSingleton,
			StaticRegisterNativesUDTFUIManager,
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
	return Z_Registration_Info_UClass_UDTFUIManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UDTFUIManager_NoRegister()
{
	return UDTFUIManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDTFUIManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Manager/DTFUIManager.h" },
		{ "ModuleRelativePath", "Manager/DTFUIManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartSlectionWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Manager/DTFUIManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartSelectionWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Manager/DTFUIManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PartSlectionWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PartSelectionWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDTFUIManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDTFUIManager_Statics::NewProp_PartSlectionWidgetClass = { "PartSlectionWidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTFUIManager, PartSlectionWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartSlectionWidgetClass_MetaData), NewProp_PartSlectionWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDTFUIManager_Statics::NewProp_PartSelectionWidget = { "PartSelectionWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTFUIManager, PartSelectionWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartSelectionWidget_MetaData), NewProp_PartSelectionWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDTFUIManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTFUIManager_Statics::NewProp_PartSlectionWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTFUIManager_Statics::NewProp_PartSelectionWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDTFUIManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDTFUIManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DT_ProjectFinal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDTFUIManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDTFUIManager_Statics::ClassParams = {
	&UDTFUIManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDTFUIManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDTFUIManager_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDTFUIManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UDTFUIManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDTFUIManager()
{
	if (!Z_Registration_Info_UClass_UDTFUIManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDTFUIManager.OuterSingleton, Z_Construct_UClass_UDTFUIManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDTFUIManager.OuterSingleton;
}
UDTFUIManager::UDTFUIManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDTFUIManager);
UDTFUIManager::~UDTFUIManager() {}
// ********** End Class UDTFUIManager **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFUIManager_h__Script_DT_ProjectFinal_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDTFUIManager, UDTFUIManager::StaticClass, TEXT("UDTFUIManager"), &Z_Registration_Info_UClass_UDTFUIManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDTFUIManager), 3507377718U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFUIManager_h__Script_DT_ProjectFinal_3619784862(TEXT("/Script/DT_ProjectFinal"),
	Z_CompiledInDeferFile_FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFUIManager_h__Script_DT_ProjectFinal_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFUIManager_h__Script_DT_ProjectFinal_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
