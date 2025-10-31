// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Manager/DTFGameModeBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDTFGameModeBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DT_PROJECTFINAL_API UClass* Z_Construct_UClass_ADTFGameModeBase();
DT_PROJECTFINAL_API UClass* Z_Construct_UClass_ADTFGameModeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_DT_ProjectFinal();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADTFGameModeBase *********************************************************
void ADTFGameModeBase::StaticRegisterNativesADTFGameModeBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADTFGameModeBase;
UClass* ADTFGameModeBase::GetPrivateStaticClass()
{
	using TClass = ADTFGameModeBase;
	if (!Z_Registration_Info_UClass_ADTFGameModeBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DTFGameModeBase"),
			Z_Registration_Info_UClass_ADTFGameModeBase.InnerSingleton,
			StaticRegisterNativesADTFGameModeBase,
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
	return Z_Registration_Info_UClass_ADTFGameModeBase.InnerSingleton;
}
UClass* Z_Construct_UClass_ADTFGameModeBase_NoRegister()
{
	return ADTFGameModeBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADTFGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Manager/DTFGameModeBase.h" },
		{ "ModuleRelativePath", "Manager/DTFGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DTFUiClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Manager/DTFGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DTFUi_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Manager/DTFGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DTFUiClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DTFUi;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADTFGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADTFGameModeBase_Statics::NewProp_DTFUiClass = { "DTFUiClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTFGameModeBase, DTFUiClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DTFUiClass_MetaData), NewProp_DTFUiClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADTFGameModeBase_Statics::NewProp_DTFUi = { "DTFUi", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTFGameModeBase, DTFUi), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DTFUi_MetaData), NewProp_DTFUi_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADTFGameModeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTFGameModeBase_Statics::NewProp_DTFUiClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTFGameModeBase_Statics::NewProp_DTFUi,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADTFGameModeBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADTFGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DT_ProjectFinal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADTFGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADTFGameModeBase_Statics::ClassParams = {
	&ADTFGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADTFGameModeBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADTFGameModeBase_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADTFGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ADTFGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADTFGameModeBase()
{
	if (!Z_Registration_Info_UClass_ADTFGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADTFGameModeBase.OuterSingleton, Z_Construct_UClass_ADTFGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADTFGameModeBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADTFGameModeBase);
ADTFGameModeBase::~ADTFGameModeBase() {}
// ********** End Class ADTFGameModeBase ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFGameModeBase_h__Script_DT_ProjectFinal_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADTFGameModeBase, ADTFGameModeBase::StaticClass, TEXT("ADTFGameModeBase"), &Z_Registration_Info_UClass_ADTFGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADTFGameModeBase), 990303273U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFGameModeBase_h__Script_DT_ProjectFinal_2324816897(TEXT("/Script/DT_ProjectFinal"),
	Z_CompiledInDeferFile_FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFGameModeBase_h__Script_DT_ProjectFinal_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFGameModeBase_h__Script_DT_ProjectFinal_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
