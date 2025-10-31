// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Manager/DTFSpawnManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDTFSpawnManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DT_PROJECTFINAL_API UClass* Z_Construct_UClass_ADTFSpawnManager();
DT_PROJECTFINAL_API UClass* Z_Construct_UClass_ADTFSpawnManager_NoRegister();
DT_PROJECTFINAL_API UClass* Z_Construct_UClass_UDTFDataAsset_NoRegister();
DT_PROJECTFINAL_API UScriptStruct* Z_Construct_UScriptStruct_FPartActorArray();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_DT_ProjectFinal();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPartActorArray ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPartActorArray;
class UScriptStruct* FPartActorArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPartActorArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPartActorArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPartActorArray, (UObject*)Z_Construct_UPackage__Script_DT_ProjectFinal(), TEXT("PartActorArray"));
	}
	return Z_Registration_Info_UScriptStruct_FPartActorArray.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPartActorArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Manager/DTFSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[] = {
		{ "Category", "PartActorArray" },
		{ "ModuleRelativePath", "Manager/DTFSpawnManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Actors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPartActorArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FPartActorArray_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPartActorArray_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPartActorArray, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actors_MetaData), NewProp_Actors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPartActorArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartActorArray_Statics::NewProp_Actors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartActorArray_Statics::NewProp_Actors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartActorArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPartActorArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DT_ProjectFinal,
	nullptr,
	&NewStructOps,
	"PartActorArray",
	Z_Construct_UScriptStruct_FPartActorArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartActorArray_Statics::PropPointers),
	sizeof(FPartActorArray),
	alignof(FPartActorArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartActorArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPartActorArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPartActorArray()
{
	if (!Z_Registration_Info_UScriptStruct_FPartActorArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPartActorArray.InnerSingleton, Z_Construct_UScriptStruct_FPartActorArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPartActorArray.InnerSingleton;
}
// ********** End ScriptStruct FPartActorArray *****************************************************

// ********** Begin Class ADTFSpawnManager Function GetPartActorClass ******************************
struct Z_Construct_UFunction_ADTFSpawnManager_GetPartActorClass_Statics
{
	struct DTFSpawnManager_eventGetPartActorClass_Parms
	{
		TSubclassOf<AActor> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PartsClass" },
		{ "ModuleRelativePath", "Manager/DTFSpawnManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADTFSpawnManager_GetPartActorClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTFSpawnManager_eventGetPartActorClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADTFSpawnManager_GetPartActorClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADTFSpawnManager_GetPartActorClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTFSpawnManager_GetPartActorClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADTFSpawnManager_GetPartActorClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADTFSpawnManager, nullptr, "GetPartActorClass", Z_Construct_UFunction_ADTFSpawnManager_GetPartActorClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADTFSpawnManager_GetPartActorClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADTFSpawnManager_GetPartActorClass_Statics::DTFSpawnManager_eventGetPartActorClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTFSpawnManager_GetPartActorClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADTFSpawnManager_GetPartActorClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADTFSpawnManager_GetPartActorClass_Statics::DTFSpawnManager_eventGetPartActorClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADTFSpawnManager_GetPartActorClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADTFSpawnManager_GetPartActorClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADTFSpawnManager::execGetPartActorClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<AActor>*)Z_Param__Result=P_THIS->GetPartActorClass();
	P_NATIVE_END;
}
// ********** End Class ADTFSpawnManager Function GetPartActorClass ********************************

// ********** Begin Class ADTFSpawnManager Function SpawnCarParts **********************************
struct Z_Construct_UFunction_ADTFSpawnManager_SpawnCarParts_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Manager/DTFSpawnManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADTFSpawnManager_SpawnCarParts_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADTFSpawnManager, nullptr, "SpawnCarParts", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTFSpawnManager_SpawnCarParts_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADTFSpawnManager_SpawnCarParts_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ADTFSpawnManager_SpawnCarParts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADTFSpawnManager_SpawnCarParts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADTFSpawnManager::execSpawnCarParts)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnCarParts();
	P_NATIVE_END;
}
// ********** End Class ADTFSpawnManager Function SpawnCarParts ************************************

// ********** Begin Class ADTFSpawnManager *********************************************************
void ADTFSpawnManager::StaticRegisterNativesADTFSpawnManager()
{
	UClass* Class = ADTFSpawnManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPartActorClass", &ADTFSpawnManager::execGetPartActorClass },
		{ "SpawnCarParts", &ADTFSpawnManager::execSpawnCarParts },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADTFSpawnManager;
UClass* ADTFSpawnManager::GetPrivateStaticClass()
{
	using TClass = ADTFSpawnManager;
	if (!Z_Registration_Info_UClass_ADTFSpawnManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DTFSpawnManager"),
			Z_Registration_Info_UClass_ADTFSpawnManager.InnerSingleton,
			StaticRegisterNativesADTFSpawnManager,
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
	return Z_Registration_Info_UClass_ADTFSpawnManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ADTFSpawnManager_NoRegister()
{
	return ADTFSpawnManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADTFSpawnManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Manager/DTFSpawnManager.h" },
		{ "ModuleRelativePath", "Manager/DTFSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarPartsDataAsset_MetaData[] = {
		{ "Category", "SpawnData" },
		{ "ModuleRelativePath", "Manager/DTFSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameSpawnPoints_MetaData[] = {
		{ "Category", "CarFrame Spawn Points" },
		{ "ModuleRelativePath", "Manager/DTFSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineSpawnPoints_MetaData[] = {
		{ "Category", "CarFrame Spawn Points" },
		{ "ModuleRelativePath", "Manager/DTFSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedLine_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Manager/DTFSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetDistance_MetaData[] = {
		{ "Category", "Part Spawn Offset Distance" },
		{ "ModuleRelativePath", "Manager/DTFSpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartsMap_MetaData[] = {
		{ "Category", "DTFSpawnManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\x8a\xa4\xed\x8f\xb0 \xeb\x90\x9c \xec\x95\xa1\xed\x84\xb0\xeb\xa5\xbc \xea\xb4\x80\xeb\xa6\xac \xed\x95\x98\xea\xb8\xb0\xec\x9c\x84\xed\x95\xb4\xec\x84\x9c\n" },
#endif
		{ "ModuleRelativePath", "Manager/DTFSpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xa4\xed\x8f\xb0 \xeb\x90\x9c \xec\x95\xa1\xed\x84\xb0\xeb\xa5\xbc \xea\xb4\x80\xeb\xa6\xac \xed\x95\x98\xea\xb8\xb0\xec\x9c\x84\xed\x95\xb4\xec\x84\x9c" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CarPartsDataAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FrameSpawnPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FrameSpawnPoints;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LineSpawnPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LineSpawnPoints;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SelectedLine;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PartsMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PartsMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PartsMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADTFSpawnManager_GetPartActorClass, "GetPartActorClass" }, // 2541434779
		{ &Z_Construct_UFunction_ADTFSpawnManager_SpawnCarParts, "SpawnCarParts" }, // 662107140
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADTFSpawnManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADTFSpawnManager_Statics::NewProp_CarPartsDataAsset = { "CarPartsDataAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTFSpawnManager, CarPartsDataAsset), Z_Construct_UClass_UDTFDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarPartsDataAsset_MetaData), NewProp_CarPartsDataAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADTFSpawnManager_Statics::NewProp_FrameSpawnPoints_Inner = { "FrameSpawnPoints", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADTFSpawnManager_Statics::NewProp_FrameSpawnPoints = { "FrameSpawnPoints", nullptr, (EPropertyFlags)0x0010000000020801, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTFSpawnManager, FrameSpawnPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameSpawnPoints_MetaData), NewProp_FrameSpawnPoints_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADTFSpawnManager_Statics::NewProp_LineSpawnPoints_Inner = { "LineSpawnPoints", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADTFSpawnManager_Statics::NewProp_LineSpawnPoints = { "LineSpawnPoints", nullptr, (EPropertyFlags)0x0010000000020801, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTFSpawnManager, LineSpawnPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineSpawnPoints_MetaData), NewProp_LineSpawnPoints_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADTFSpawnManager_Statics::NewProp_SelectedLine = { "SelectedLine", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTFSpawnManager, SelectedLine), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedLine_MetaData), NewProp_SelectedLine_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADTFSpawnManager_Statics::NewProp_OffsetDistance = { "OffsetDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTFSpawnManager, OffsetDistance), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetDistance_MetaData), NewProp_OffsetDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADTFSpawnManager_Statics::NewProp_PartsMap_ValueProp = { "PartsMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FPartActorArray, METADATA_PARAMS(0, nullptr) }; // 1293919948
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADTFSpawnManager_Statics::NewProp_PartsMap_Key_KeyProp = { "PartsMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ADTFSpawnManager_Statics::NewProp_PartsMap = { "PartsMap", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTFSpawnManager, PartsMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartsMap_MetaData), NewProp_PartsMap_MetaData) }; // 1293919948
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADTFSpawnManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTFSpawnManager_Statics::NewProp_CarPartsDataAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTFSpawnManager_Statics::NewProp_FrameSpawnPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTFSpawnManager_Statics::NewProp_FrameSpawnPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTFSpawnManager_Statics::NewProp_LineSpawnPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTFSpawnManager_Statics::NewProp_LineSpawnPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTFSpawnManager_Statics::NewProp_SelectedLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTFSpawnManager_Statics::NewProp_OffsetDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTFSpawnManager_Statics::NewProp_PartsMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTFSpawnManager_Statics::NewProp_PartsMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTFSpawnManager_Statics::NewProp_PartsMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADTFSpawnManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADTFSpawnManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DT_ProjectFinal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADTFSpawnManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADTFSpawnManager_Statics::ClassParams = {
	&ADTFSpawnManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADTFSpawnManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADTFSpawnManager_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADTFSpawnManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ADTFSpawnManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADTFSpawnManager()
{
	if (!Z_Registration_Info_UClass_ADTFSpawnManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADTFSpawnManager.OuterSingleton, Z_Construct_UClass_ADTFSpawnManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADTFSpawnManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADTFSpawnManager);
ADTFSpawnManager::~ADTFSpawnManager() {}
// ********** End Class ADTFSpawnManager ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFSpawnManager_h__Script_DT_ProjectFinal_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPartActorArray::StaticStruct, Z_Construct_UScriptStruct_FPartActorArray_Statics::NewStructOps, TEXT("PartActorArray"), &Z_Registration_Info_UScriptStruct_FPartActorArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPartActorArray), 1293919948U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADTFSpawnManager, ADTFSpawnManager::StaticClass, TEXT("ADTFSpawnManager"), &Z_Registration_Info_UClass_ADTFSpawnManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADTFSpawnManager), 4182138567U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFSpawnManager_h__Script_DT_ProjectFinal_3459515717(TEXT("/Script/DT_ProjectFinal"),
	Z_CompiledInDeferFile_FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFSpawnManager_h__Script_DT_ProjectFinal_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFSpawnManager_h__Script_DT_ProjectFinal_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFSpawnManager_h__Script_DT_ProjectFinal_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFSpawnManager_h__Script_DT_ProjectFinal_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
