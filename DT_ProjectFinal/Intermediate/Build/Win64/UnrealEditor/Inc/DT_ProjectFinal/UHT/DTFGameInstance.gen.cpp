// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Manager/DTFGameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDTFGameInstance() {}

// ********** Begin Cross Module References ********************************************************
DT_PROJECTFINAL_API UClass* Z_Construct_UClass_UDTFGameInstance();
DT_PROJECTFINAL_API UClass* Z_Construct_UClass_UDTFGameInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
UPackage* Z_Construct_UPackage__Script_DT_ProjectFinal();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDTFGameInstance Function AddComponentedCars *****************************
struct Z_Construct_UFunction_UDTFGameInstance_AddComponentedCars_Statics
{
	struct DTFGameInstance_eventAddComponentedCars_Parms
	{
		int32 LineIndex;
		int32 Count;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\x83\x9d\xec\x82\xb0\xeb\x90\x9c \xec\x9e\x90\xeb\x8f\x99\xec\xb0\xa8 \xec\x88\x98\xeb\x9f\x89 \xec\xb6\x94\xea\xb0\x80 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "CPP_Default_Count", "1" },
		{ "ModuleRelativePath", "Manager/DTFGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x83\x9d\xec\x82\xb0\xeb\x90\x9c \xec\x9e\x90\xeb\x8f\x99\xec\xb0\xa8 \xec\x88\x98\xeb\x9f\x89 \xec\xb6\x94\xea\xb0\x80 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LineIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDTFGameInstance_AddComponentedCars_Statics::NewProp_LineIndex = { "LineIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTFGameInstance_eventAddComponentedCars_Parms, LineIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDTFGameInstance_AddComponentedCars_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTFGameInstance_eventAddComponentedCars_Parms, Count), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDTFGameInstance_AddComponentedCars_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTFGameInstance_AddComponentedCars_Statics::NewProp_LineIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTFGameInstance_AddComponentedCars_Statics::NewProp_Count,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTFGameInstance_AddComponentedCars_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTFGameInstance_AddComponentedCars_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDTFGameInstance, nullptr, "AddComponentedCars", Z_Construct_UFunction_UDTFGameInstance_AddComponentedCars_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTFGameInstance_AddComponentedCars_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDTFGameInstance_AddComponentedCars_Statics::DTFGameInstance_eventAddComponentedCars_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTFGameInstance_AddComponentedCars_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDTFGameInstance_AddComponentedCars_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDTFGameInstance_AddComponentedCars_Statics::DTFGameInstance_eventAddComponentedCars_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDTFGameInstance_AddComponentedCars()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDTFGameInstance_AddComponentedCars_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDTFGameInstance::execAddComponentedCars)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LineIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddComponentedCars(Z_Param_LineIndex,Z_Param_Count);
	P_NATIVE_END;
}
// ********** End Class UDTFGameInstance Function AddComponentedCars *******************************

// ********** Begin Class UDTFGameInstance Function AddPartUsage ***********************************
struct Z_Construct_UFunction_UDTFGameInstance_AddPartUsage_Statics
{
	struct DTFGameInstance_eventAddPartUsage_Parms
	{
		FString PartName;
		int32 count;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xeb\xb6\x80\xed\x92\x88 \xec\x82\xac\xec\x9a\xa9 \xea\xb8\xb0\xeb\xa1\x9d \xec\xb6\x94\xea\xb0\x80 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "CPP_Default_count", "1" },
		{ "ModuleRelativePath", "Manager/DTFGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb6\x80\xed\x92\x88 \xec\x82\xac\xec\x9a\xa9 \xea\xb8\xb0\xeb\xa1\x9d \xec\xb6\x94\xea\xb0\x80 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PartName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_count;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDTFGameInstance_AddPartUsage_Statics::NewProp_PartName = { "PartName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTFGameInstance_eventAddPartUsage_Parms, PartName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartName_MetaData), NewProp_PartName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDTFGameInstance_AddPartUsage_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTFGameInstance_eventAddPartUsage_Parms, count), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDTFGameInstance_AddPartUsage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTFGameInstance_AddPartUsage_Statics::NewProp_PartName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTFGameInstance_AddPartUsage_Statics::NewProp_count,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTFGameInstance_AddPartUsage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTFGameInstance_AddPartUsage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDTFGameInstance, nullptr, "AddPartUsage", Z_Construct_UFunction_UDTFGameInstance_AddPartUsage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTFGameInstance_AddPartUsage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDTFGameInstance_AddPartUsage_Statics::DTFGameInstance_eventAddPartUsage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTFGameInstance_AddPartUsage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDTFGameInstance_AddPartUsage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDTFGameInstance_AddPartUsage_Statics::DTFGameInstance_eventAddPartUsage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDTFGameInstance_AddPartUsage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDTFGameInstance_AddPartUsage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDTFGameInstance::execAddPartUsage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PartName);
	P_GET_PROPERTY(FIntProperty,Z_Param_count);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddPartUsage(Z_Param_PartName,Z_Param_count);
	P_NATIVE_END;
}
// ********** End Class UDTFGameInstance Function AddPartUsage *************************************

// ********** Begin Class UDTFGameInstance *********************************************************
void UDTFGameInstance::StaticRegisterNativesUDTFGameInstance()
{
	UClass* Class = UDTFGameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddComponentedCars", &UDTFGameInstance::execAddComponentedCars },
		{ "AddPartUsage", &UDTFGameInstance::execAddPartUsage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDTFGameInstance;
UClass* UDTFGameInstance::GetPrivateStaticClass()
{
	using TClass = UDTFGameInstance;
	if (!Z_Registration_Info_UClass_UDTFGameInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DTFGameInstance"),
			Z_Registration_Info_UClass_UDTFGameInstance.InnerSingleton,
			StaticRegisterNativesUDTFGameInstance,
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
	return Z_Registration_Info_UClass_UDTFGameInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UDTFGameInstance_NoRegister()
{
	return UDTFGameInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDTFGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Manager/DTFGameInstance.h" },
		{ "ModuleRelativePath", "Manager/DTFGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalCompletedCars_MetaData[] = {
		{ "Category", "DTFGameInstance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb4\x9d \xec\x99\x84\xec\x84\xb1 \xec\x9e\x90\xeb\x8f\x99\xec\xb0\xa8 \xea\xb0\x9c\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Manager/DTFGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb4\x9d \xec\x99\x84\xec\x84\xb1 \xec\x9e\x90\xeb\x8f\x99\xec\xb0\xa8 \xea\xb0\x9c\xec\x88\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineProductionCount_MetaData[] = {
		{ "Category", "DTFGameInstance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xeb\x9d\xbc\xec\x9d\xb8\xeb\xb3\x84 \xeb\x88\x84\xec\xa0\x81 \xec\x83\x9d\xec\x82\xb0\xeb\x9f\x89\n" },
#endif
		{ "ModuleRelativePath", "Manager/DTFGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x9d\xbc\xec\x9d\xb8\xeb\xb3\x84 \xeb\x88\x84\xec\xa0\x81 \xec\x83\x9d\xec\x82\xb0\xeb\x9f\x89" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalCompletedCars;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LineProductionCount_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LineProductionCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDTFGameInstance_AddComponentedCars, "AddComponentedCars" }, // 1150641988
		{ &Z_Construct_UFunction_UDTFGameInstance_AddPartUsage, "AddPartUsage" }, // 551847171
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDTFGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDTFGameInstance_Statics::NewProp_TotalCompletedCars = { "TotalCompletedCars", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTFGameInstance, TotalCompletedCars), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalCompletedCars_MetaData), NewProp_TotalCompletedCars_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDTFGameInstance_Statics::NewProp_LineProductionCount_Inner = { "LineProductionCount", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDTFGameInstance_Statics::NewProp_LineProductionCount = { "LineProductionCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTFGameInstance, LineProductionCount), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineProductionCount_MetaData), NewProp_LineProductionCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDTFGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTFGameInstance_Statics::NewProp_TotalCompletedCars,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTFGameInstance_Statics::NewProp_LineProductionCount_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTFGameInstance_Statics::NewProp_LineProductionCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDTFGameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDTFGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_DT_ProjectFinal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDTFGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDTFGameInstance_Statics::ClassParams = {
	&UDTFGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDTFGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDTFGameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDTFGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UDTFGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDTFGameInstance()
{
	if (!Z_Registration_Info_UClass_UDTFGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDTFGameInstance.OuterSingleton, Z_Construct_UClass_UDTFGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDTFGameInstance.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDTFGameInstance);
UDTFGameInstance::~UDTFGameInstance() {}
// ********** End Class UDTFGameInstance ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFGameInstance_h__Script_DT_ProjectFinal_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDTFGameInstance, UDTFGameInstance::StaticClass, TEXT("UDTFGameInstance"), &Z_Registration_Info_UClass_UDTFGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDTFGameInstance), 3299332907U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFGameInstance_h__Script_DT_ProjectFinal_75037342(TEXT("/Script/DT_ProjectFinal"),
	Z_CompiledInDeferFile_FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFGameInstance_h__Script_DT_ProjectFinal_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFGameInstance_h__Script_DT_ProjectFinal_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
