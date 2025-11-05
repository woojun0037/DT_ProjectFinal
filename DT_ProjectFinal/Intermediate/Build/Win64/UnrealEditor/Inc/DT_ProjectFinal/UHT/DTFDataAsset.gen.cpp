// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataAsset/DTFDataAsset.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDTFDataAsset() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
DT_PROJECTFINAL_API UClass* Z_Construct_UClass_UDTFDataAsset();
DT_PROJECTFINAL_API UClass* Z_Construct_UClass_UDTFDataAsset_NoRegister();
DT_PROJECTFINAL_API UScriptStruct* Z_Construct_UScriptStruct_FPartsInfo();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_DT_ProjectFinal();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPartsInfo ********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPartsInfo;
class UScriptStruct* FPartsInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPartsInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPartsInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPartsInfo, (UObject*)Z_Construct_UPackage__Script_DT_ProjectFinal(), TEXT("PartsInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FPartsInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPartsInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DataAsset/DTFDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartsName_MetaData[] = {
		{ "Category", "Parts Name" },
		{ "ModuleRelativePath", "DataAsset/DTFDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartsMesh_MetaData[] = {
		{ "Category", "Parts Mesh" },
		{ "ModuleRelativePath", "DataAsset/DTFDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartsNamePattern_MetaData[] = {
		{ "Category", "Parts Offset" },
		{ "ModuleRelativePath", "DataAsset/DTFDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetX_MetaData[] = {
		{ "Category", "Parts Offset" },
		{ "ModuleRelativePath", "DataAsset/DTFDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetY_MetaData[] = {
		{ "Category", "Parts Offset" },
		{ "ModuleRelativePath", "DataAsset/DTFDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetZ_MetaData[] = {
		{ "Category", "Parts Offset" },
		{ "ModuleRelativePath", "DataAsset/DTFDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_transform_MetaData[] = {
		{ "Category", "SpawnTransfrom" },
		{ "ModuleRelativePath", "DataAsset/DTFDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PartsName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PartsMesh;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PartsNamePattern;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetZ;
	static const UECodeGen_Private::FStructPropertyParams NewProp_transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPartsInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPartsInfo_Statics::NewProp_PartsName = { "PartsName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPartsInfo, PartsName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartsName_MetaData), NewProp_PartsName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPartsInfo_Statics::NewProp_PartsMesh = { "PartsMesh", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPartsInfo, PartsMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartsMesh_MetaData), NewProp_PartsMesh_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPartsInfo_Statics::NewProp_PartsNamePattern = { "PartsNamePattern", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPartsInfo, PartsNamePattern), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartsNamePattern_MetaData), NewProp_PartsNamePattern_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPartsInfo_Statics::NewProp_OffsetX = { "OffsetX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPartsInfo, OffsetX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetX_MetaData), NewProp_OffsetX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPartsInfo_Statics::NewProp_OffsetY = { "OffsetY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPartsInfo, OffsetY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetY_MetaData), NewProp_OffsetY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPartsInfo_Statics::NewProp_OffsetZ = { "OffsetZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPartsInfo, OffsetZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetZ_MetaData), NewProp_OffsetZ_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPartsInfo_Statics::NewProp_transform = { "transform", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPartsInfo, transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_transform_MetaData), NewProp_transform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPartsInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartsInfo_Statics::NewProp_PartsName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartsInfo_Statics::NewProp_PartsMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartsInfo_Statics::NewProp_PartsNamePattern,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartsInfo_Statics::NewProp_OffsetX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartsInfo_Statics::NewProp_OffsetY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartsInfo_Statics::NewProp_OffsetZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartsInfo_Statics::NewProp_transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartsInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPartsInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DT_ProjectFinal,
	nullptr,
	&NewStructOps,
	"PartsInfo",
	Z_Construct_UScriptStruct_FPartsInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartsInfo_Statics::PropPointers),
	sizeof(FPartsInfo),
	alignof(FPartsInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartsInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPartsInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPartsInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FPartsInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPartsInfo.InnerSingleton, Z_Construct_UScriptStruct_FPartsInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPartsInfo.InnerSingleton;
}
// ********** End ScriptStruct FPartsInfo **********************************************************

// ********** Begin Class UDTFDataAsset ************************************************************
void UDTFDataAsset::StaticRegisterNativesUDTFDataAsset()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDTFDataAsset;
UClass* UDTFDataAsset::GetPrivateStaticClass()
{
	using TClass = UDTFDataAsset;
	if (!Z_Registration_Info_UClass_UDTFDataAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DTFDataAsset"),
			Z_Registration_Info_UClass_UDTFDataAsset.InnerSingleton,
			StaticRegisterNativesUDTFDataAsset,
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
	return Z_Registration_Info_UClass_UDTFDataAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UDTFDataAsset_NoRegister()
{
	return UDTFDataAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDTFDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DataAsset/DTFDataAsset.h" },
		{ "ModuleRelativePath", "DataAsset/DTFDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parts_MetaData[] = {
		{ "Category", "Parts" },
		{ "ModuleRelativePath", "DataAsset/DTFDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartActorClass_MetaData[] = {
		{ "Category", "Part SoftObejct Info" },
		{ "ModuleRelativePath", "DataAsset/DTFDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Parts;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_PartActorClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDTFDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDTFDataAsset_Statics::NewProp_Parts_Inner = { "Parts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPartsInfo, METADATA_PARAMS(0, nullptr) }; // 2208304747
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDTFDataAsset_Statics::NewProp_Parts = { "Parts", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTFDataAsset, Parts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parts_MetaData), NewProp_Parts_MetaData) }; // 2208304747
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UDTFDataAsset_Statics::NewProp_PartActorClass = { "PartActorClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTFDataAsset, PartActorClass), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartActorClass_MetaData), NewProp_PartActorClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDTFDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTFDataAsset_Statics::NewProp_Parts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTFDataAsset_Statics::NewProp_Parts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTFDataAsset_Statics::NewProp_PartActorClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDTFDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDTFDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_DT_ProjectFinal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDTFDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDTFDataAsset_Statics::ClassParams = {
	&UDTFDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDTFDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDTFDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDTFDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UDTFDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDTFDataAsset()
{
	if (!Z_Registration_Info_UClass_UDTFDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDTFDataAsset.OuterSingleton, Z_Construct_UClass_UDTFDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDTFDataAsset.OuterSingleton;
}
UDTFDataAsset::UDTFDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDTFDataAsset);
UDTFDataAsset::~UDTFDataAsset() {}
// ********** End Class UDTFDataAsset **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_DT_ProjectFinal_Source_DT_ProjectFinal_DataAsset_DTFDataAsset_h__Script_DT_ProjectFinal_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPartsInfo::StaticStruct, Z_Construct_UScriptStruct_FPartsInfo_Statics::NewStructOps, TEXT("PartsInfo"), &Z_Registration_Info_UScriptStruct_FPartsInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPartsInfo), 2208304747U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDTFDataAsset, UDTFDataAsset::StaticClass, TEXT("UDTFDataAsset"), &Z_Registration_Info_UClass_UDTFDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDTFDataAsset), 1621203549U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DT_ProjectFinal_Source_DT_ProjectFinal_DataAsset_DTFDataAsset_h__Script_DT_ProjectFinal_1236244434(TEXT("/Script/DT_ProjectFinal"),
	Z_CompiledInDeferFile_FID_DT_ProjectFinal_Source_DT_ProjectFinal_DataAsset_DTFDataAsset_h__Script_DT_ProjectFinal_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DT_ProjectFinal_Source_DT_ProjectFinal_DataAsset_DTFDataAsset_h__Script_DT_ProjectFinal_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_DT_ProjectFinal_Source_DT_ProjectFinal_DataAsset_DTFDataAsset_h__Script_DT_ProjectFinal_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DT_ProjectFinal_Source_DT_ProjectFinal_DataAsset_DTFDataAsset_h__Script_DT_ProjectFinal_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
