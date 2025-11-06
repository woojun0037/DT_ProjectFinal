// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CarParts/DTFCarParts.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDTFCarParts() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
DT_PROJECTFINAL_API UClass* Z_Construct_UClass_ADTFCarParts();
DT_PROJECTFINAL_API UClass* Z_Construct_UClass_ADTFCarParts_NoRegister();
DT_PROJECTFINAL_API UScriptStruct* Z_Construct_UScriptStruct_FAttachmentTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_DT_ProjectFinal();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FAttachmentTransform **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAttachmentTransform;
class UScriptStruct* FAttachmentTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAttachmentTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAttachmentTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttachmentTransform, (UObject*)Z_Construct_UPackage__Script_DT_ProjectFinal(), TEXT("AttachmentTransform"));
	}
	return Z_Registration_Info_UScriptStruct_FAttachmentTransform.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAttachmentTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xed\x8c\x8c\xec\xb8\xa0 \xeb\xb3\x84\xeb\xa1\x9c \xeb\xb6\x80\xec\xb0\xa9\xeb\x90\x98\xeb\x8a\x94 \xec\x9c\x84\xec\xb9\x98, \xed\x9a\x8c\xec\xa0\x84\n" },
#endif
		{ "ModuleRelativePath", "CarParts/DTFCarParts.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x8c\x8c\xec\xb8\xa0 \xeb\xb3\x84\xeb\xa1\x9c \xeb\xb6\x80\xec\xb0\xa9\xeb\x90\x98\xeb\x8a\x94 \xec\x9c\x84\xec\xb9\x98, \xed\x9a\x8c\xec\xa0\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "AttachmentTransform" },
		{ "ModuleRelativePath", "CarParts/DTFCarParts.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttachmentTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttachmentTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentTransform, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttachmentTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentTransform_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttachmentTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DT_ProjectFinal,
	nullptr,
	&NewStructOps,
	"AttachmentTransform",
	Z_Construct_UScriptStruct_FAttachmentTransform_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentTransform_Statics::PropPointers),
	sizeof(FAttachmentTransform),
	alignof(FAttachmentTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAttachmentTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAttachmentTransform()
{
	if (!Z_Registration_Info_UScriptStruct_FAttachmentTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAttachmentTransform.InnerSingleton, Z_Construct_UScriptStruct_FAttachmentTransform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAttachmentTransform.InnerSingleton;
}
// ********** End ScriptStruct FAttachmentTransform ************************************************

// ********** Begin Class ADTFCarParts *************************************************************
void ADTFCarParts::StaticRegisterNativesADTFCarParts()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADTFCarParts;
UClass* ADTFCarParts::GetPrivateStaticClass()
{
	using TClass = ADTFCarParts;
	if (!Z_Registration_Info_UClass_ADTFCarParts.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DTFCarParts"),
			Z_Registration_Info_UClass_ADTFCarParts.InnerSingleton,
			StaticRegisterNativesADTFCarParts,
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
	return Z_Registration_Info_UClass_ADTFCarParts.InnerSingleton;
}
UClass* Z_Construct_UClass_ADTFCarParts_NoRegister()
{
	return ADTFCarParts::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADTFCarParts_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CarParts/DTFCarParts.h" },
		{ "ModuleRelativePath", "CarParts/DTFCarParts.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartsMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CarParts/DTFCarParts.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAssemble_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "CarParts/DTFCarParts.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartsName_MetaData[] = {
		{ "Category", "Parts Name" },
		{ "ModuleRelativePath", "CarParts/DTFCarParts.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachTransform_MetaData[] = {
		{ "Category", "Assembly" },
		{ "ModuleRelativePath", "CarParts/DTFCarParts.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PartsMesh;
	static void NewProp_bIsAssemble_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAssemble;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PartsName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttachTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADTFCarParts>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADTFCarParts_Statics::NewProp_PartsMesh = { "PartsMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTFCarParts, PartsMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartsMesh_MetaData), NewProp_PartsMesh_MetaData) };
void Z_Construct_UClass_ADTFCarParts_Statics::NewProp_bIsAssemble_SetBit(void* Obj)
{
	((ADTFCarParts*)Obj)->bIsAssemble = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADTFCarParts_Statics::NewProp_bIsAssemble = { "bIsAssemble", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADTFCarParts), &Z_Construct_UClass_ADTFCarParts_Statics::NewProp_bIsAssemble_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAssemble_MetaData), NewProp_bIsAssemble_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADTFCarParts_Statics::NewProp_PartsName = { "PartsName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTFCarParts, PartsName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartsName_MetaData), NewProp_PartsName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADTFCarParts_Statics::NewProp_AttachTransform = { "AttachTransform", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTFCarParts, AttachTransform), Z_Construct_UScriptStruct_FAttachmentTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachTransform_MetaData), NewProp_AttachTransform_MetaData) }; // 3884010519
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADTFCarParts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTFCarParts_Statics::NewProp_PartsMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTFCarParts_Statics::NewProp_bIsAssemble,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTFCarParts_Statics::NewProp_PartsName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTFCarParts_Statics::NewProp_AttachTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADTFCarParts_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADTFCarParts_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DT_ProjectFinal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADTFCarParts_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADTFCarParts_Statics::ClassParams = {
	&ADTFCarParts::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADTFCarParts_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADTFCarParts_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADTFCarParts_Statics::Class_MetaDataParams), Z_Construct_UClass_ADTFCarParts_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADTFCarParts()
{
	if (!Z_Registration_Info_UClass_ADTFCarParts.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADTFCarParts.OuterSingleton, Z_Construct_UClass_ADTFCarParts_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADTFCarParts.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADTFCarParts);
ADTFCarParts::~ADTFCarParts() {}
// ********** End Class ADTFCarParts ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_CarParts_DTFCarParts_h__Script_DT_ProjectFinal_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAttachmentTransform::StaticStruct, Z_Construct_UScriptStruct_FAttachmentTransform_Statics::NewStructOps, TEXT("AttachmentTransform"), &Z_Registration_Info_UScriptStruct_FAttachmentTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttachmentTransform), 3884010519U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADTFCarParts, ADTFCarParts::StaticClass, TEXT("ADTFCarParts"), &Z_Registration_Info_UClass_ADTFCarParts, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADTFCarParts), 869182198U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_CarParts_DTFCarParts_h__Script_DT_ProjectFinal_384420623(TEXT("/Script/DT_ProjectFinal"),
	Z_CompiledInDeferFile_FID_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_CarParts_DTFCarParts_h__Script_DT_ProjectFinal_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_CarParts_DTFCarParts_h__Script_DT_ProjectFinal_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_CarParts_DTFCarParts_h__Script_DT_ProjectFinal_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_CarParts_DTFCarParts_h__Script_DT_ProjectFinal_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
