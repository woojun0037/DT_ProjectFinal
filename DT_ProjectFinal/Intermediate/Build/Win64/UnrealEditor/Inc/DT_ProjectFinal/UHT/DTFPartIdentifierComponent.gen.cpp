// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Component/DTFPartIdentifierComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDTFPartIdentifierComponent() {}

// ********** Begin Cross Module References ********************************************************
DT_PROJECTFINAL_API UClass* Z_Construct_UClass_UDTFPartIdentifierComponent();
DT_PROJECTFINAL_API UClass* Z_Construct_UClass_UDTFPartIdentifierComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_DT_ProjectFinal();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDTFPartIdentifierComponent **********************************************
void UDTFPartIdentifierComponent::StaticRegisterNativesUDTFPartIdentifierComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDTFPartIdentifierComponent;
UClass* UDTFPartIdentifierComponent::GetPrivateStaticClass()
{
	using TClass = UDTFPartIdentifierComponent;
	if (!Z_Registration_Info_UClass_UDTFPartIdentifierComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DTFPartIdentifierComponent"),
			Z_Registration_Info_UClass_UDTFPartIdentifierComponent.InnerSingleton,
			StaticRegisterNativesUDTFPartIdentifierComponent,
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
	return Z_Registration_Info_UClass_UDTFPartIdentifierComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UDTFPartIdentifierComponent_NoRegister()
{
	return UDTFPartIdentifierComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDTFPartIdentifierComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Component/DTFPartIdentifierComponent.h" },
		{ "ModuleRelativePath", "Component/DTFPartIdentifierComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartType_MetaData[] = {
		{ "Category", "Parts Info" },
		{ "ModuleRelativePath", "Component/DTFPartIdentifierComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PartType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDTFPartIdentifierComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDTFPartIdentifierComponent_Statics::NewProp_PartType = { "PartType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTFPartIdentifierComponent, PartType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartType_MetaData), NewProp_PartType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDTFPartIdentifierComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTFPartIdentifierComponent_Statics::NewProp_PartType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDTFPartIdentifierComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDTFPartIdentifierComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DT_ProjectFinal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDTFPartIdentifierComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDTFPartIdentifierComponent_Statics::ClassParams = {
	&UDTFPartIdentifierComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDTFPartIdentifierComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDTFPartIdentifierComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDTFPartIdentifierComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDTFPartIdentifierComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDTFPartIdentifierComponent()
{
	if (!Z_Registration_Info_UClass_UDTFPartIdentifierComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDTFPartIdentifierComponent.OuterSingleton, Z_Construct_UClass_UDTFPartIdentifierComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDTFPartIdentifierComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDTFPartIdentifierComponent);
UDTFPartIdentifierComponent::~UDTFPartIdentifierComponent() {}
// ********** End Class UDTFPartIdentifierComponent ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_DT_ProjectFinal_Source_DT_ProjectFinal_Component_DTFPartIdentifierComponent_h__Script_DT_ProjectFinal_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDTFPartIdentifierComponent, UDTFPartIdentifierComponent::StaticClass, TEXT("UDTFPartIdentifierComponent"), &Z_Registration_Info_UClass_UDTFPartIdentifierComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDTFPartIdentifierComponent), 4241286948U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DT_ProjectFinal_Source_DT_ProjectFinal_Component_DTFPartIdentifierComponent_h__Script_DT_ProjectFinal_1928018267(TEXT("/Script/DT_ProjectFinal"),
	Z_CompiledInDeferFile_FID_DT_ProjectFinal_Source_DT_ProjectFinal_Component_DTFPartIdentifierComponent_h__Script_DT_ProjectFinal_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DT_ProjectFinal_Source_DT_ProjectFinal_Component_DTFPartIdentifierComponent_h__Script_DT_ProjectFinal_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
