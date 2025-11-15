// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Manager/UI/DTFUIManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDTFUIManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DT_PROJECTFINAL_API UClass* Z_Construct_UClass_UDTFUIManager();
DT_PROJECTFINAL_API UClass* Z_Construct_UClass_UDTFUIManager_NoRegister();
DT_PROJECTFINAL_API UFunction* Z_Construct_UDelegateFunction_DT_ProjectFinal_OnPartsSpawned__DelegateSignature();
DT_PROJECTFINAL_API UFunction* Z_Construct_UDelegateFunction_DT_ProjectFinal_OnSpawned__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_DT_ProjectFinal();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnPartsSpawned *******************************************************
struct Z_Construct_UDelegateFunction_DT_ProjectFinal_OnPartsSpawned__DelegateSignature_Statics
{
	struct _Script_DT_ProjectFinal_eventOnPartsSpawned_Parms
	{
		FName LineName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Manager/UI/DTFUIManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_LineName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_DT_ProjectFinal_OnPartsSpawned__DelegateSignature_Statics::NewProp_LineName = { "LineName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DT_ProjectFinal_eventOnPartsSpawned_Parms, LineName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DT_ProjectFinal_OnPartsSpawned__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DT_ProjectFinal_OnPartsSpawned__DelegateSignature_Statics::NewProp_LineName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DT_ProjectFinal_OnPartsSpawned__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_DT_ProjectFinal_OnPartsSpawned__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_DT_ProjectFinal, nullptr, "OnPartsSpawned__DelegateSignature", Z_Construct_UDelegateFunction_DT_ProjectFinal_OnPartsSpawned__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DT_ProjectFinal_OnPartsSpawned__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DT_ProjectFinal_OnPartsSpawned__DelegateSignature_Statics::_Script_DT_ProjectFinal_eventOnPartsSpawned_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DT_ProjectFinal_OnPartsSpawned__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DT_ProjectFinal_OnPartsSpawned__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_DT_ProjectFinal_OnPartsSpawned__DelegateSignature_Statics::_Script_DT_ProjectFinal_eventOnPartsSpawned_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_DT_ProjectFinal_OnPartsSpawned__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DT_ProjectFinal_OnPartsSpawned__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPartsSpawned_DelegateWrapper(const FMulticastScriptDelegate& OnPartsSpawned, FName LineName)
{
	struct _Script_DT_ProjectFinal_eventOnPartsSpawned_Parms
	{
		FName LineName;
	};
	_Script_DT_ProjectFinal_eventOnPartsSpawned_Parms Parms;
	Parms.LineName=LineName;
	OnPartsSpawned.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPartsSpawned *********************************************************

// ********** Begin Delegate FOnSpawned ************************************************************
struct Z_Construct_UDelegateFunction_DT_ProjectFinal_OnSpawned__DelegateSignature_Statics
{
	struct _Script_DT_ProjectFinal_eventOnSpawned_Parms
	{
		FName LineName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Manager/UI/DTFUIManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_LineName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_DT_ProjectFinal_OnSpawned__DelegateSignature_Statics::NewProp_LineName = { "LineName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DT_ProjectFinal_eventOnSpawned_Parms, LineName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DT_ProjectFinal_OnSpawned__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DT_ProjectFinal_OnSpawned__DelegateSignature_Statics::NewProp_LineName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DT_ProjectFinal_OnSpawned__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_DT_ProjectFinal_OnSpawned__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_DT_ProjectFinal, nullptr, "OnSpawned__DelegateSignature", Z_Construct_UDelegateFunction_DT_ProjectFinal_OnSpawned__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DT_ProjectFinal_OnSpawned__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DT_ProjectFinal_OnSpawned__DelegateSignature_Statics::_Script_DT_ProjectFinal_eventOnSpawned_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DT_ProjectFinal_OnSpawned__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DT_ProjectFinal_OnSpawned__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_DT_ProjectFinal_OnSpawned__DelegateSignature_Statics::_Script_DT_ProjectFinal_eventOnSpawned_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_DT_ProjectFinal_OnSpawned__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DT_ProjectFinal_OnSpawned__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSpawned_DelegateWrapper(const FMulticastScriptDelegate& OnSpawned, FName LineName)
{
	struct _Script_DT_ProjectFinal_eventOnSpawned_Parms
	{
		FName LineName;
	};
	_Script_DT_ProjectFinal_eventOnSpawned_Parms Parms;
	Parms.LineName=LineName;
	OnSpawned.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSpawned **************************************************************

// ********** Begin Class UDTFUIManager Function BroadcastPartsSpawned *****************************
struct Z_Construct_UFunction_UDTFUIManager_BroadcastPartsSpawned_Statics
{
	struct DTFUIManager_eventBroadcastPartsSpawned_Parms
	{
		FName LineName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x8a\xa4\xed\x8f\xb0 \xeb\x81\x9d\xeb\x82\xac\xec\x9d\x84 \xeb\x95\x8c \xeb\xa7\xa4\xeb\x8b\x88\xec\xa0\x80\xea\xb0\x80 \xed\x98\xb8\xec\xb6\x9c\n" },
#endif
		{ "ModuleRelativePath", "Manager/UI/DTFUIManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xa4\xed\x8f\xb0 \xeb\x81\x9d\xeb\x82\xac\xec\x9d\x84 \xeb\x95\x8c \xeb\xa7\xa4\xeb\x8b\x88\xec\xa0\x80\xea\xb0\x80 \xed\x98\xb8\xec\xb6\x9c" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_LineName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDTFUIManager_BroadcastPartsSpawned_Statics::NewProp_LineName = { "LineName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTFUIManager_eventBroadcastPartsSpawned_Parms, LineName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDTFUIManager_BroadcastPartsSpawned_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTFUIManager_BroadcastPartsSpawned_Statics::NewProp_LineName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTFUIManager_BroadcastPartsSpawned_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTFUIManager_BroadcastPartsSpawned_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDTFUIManager, nullptr, "BroadcastPartsSpawned", Z_Construct_UFunction_UDTFUIManager_BroadcastPartsSpawned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTFUIManager_BroadcastPartsSpawned_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDTFUIManager_BroadcastPartsSpawned_Statics::DTFUIManager_eventBroadcastPartsSpawned_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTFUIManager_BroadcastPartsSpawned_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDTFUIManager_BroadcastPartsSpawned_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDTFUIManager_BroadcastPartsSpawned_Statics::DTFUIManager_eventBroadcastPartsSpawned_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDTFUIManager_BroadcastPartsSpawned()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDTFUIManager_BroadcastPartsSpawned_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDTFUIManager::execBroadcastPartsSpawned)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_LineName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BroadcastPartsSpawned(Z_Param_LineName);
	P_NATIVE_END;
}
// ********** End Class UDTFUIManager Function BroadcastPartsSpawned *******************************

// ********** Begin Class UDTFUIManager Function RequestSpawn **************************************
struct Z_Construct_UFunction_UDTFUIManager_RequestSpawn_Statics
{
	struct DTFUIManager_eventRequestSpawn_Parms
	{
		FName LineName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \"\xeb\x9d\xbc\xec\x9d\xb8 X\xec\x97\x90\xec\x84\x9c \xec\x8a\xa4\xed\x8f\xb0 \xec\x9a\x94\xec\xb2\xad (\xeb\xb2\x84\xed\x8a\xbc \xed\x81\xb4\xeb\xa6\xad)\"\n// WBP\xec\x97\x90\xec\x84\x9c \xec\x9d\xb4\xea\xb1\xb0 \xed\x98\xb8\xec\xb6\x9c\n" },
#endif
		{ "ModuleRelativePath", "Manager/UI/DTFUIManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\"\xeb\x9d\xbc\xec\x9d\xb8 X\xec\x97\x90\xec\x84\x9c \xec\x8a\xa4\xed\x8f\xb0 \xec\x9a\x94\xec\xb2\xad (\xeb\xb2\x84\xed\x8a\xbc \xed\x81\xb4\xeb\xa6\xad)\"\nWBP\xec\x97\x90\xec\x84\x9c \xec\x9d\xb4\xea\xb1\xb0 \xed\x98\xb8\xec\xb6\x9c" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_LineName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDTFUIManager_RequestSpawn_Statics::NewProp_LineName = { "LineName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTFUIManager_eventRequestSpawn_Parms, LineName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDTFUIManager_RequestSpawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTFUIManager_RequestSpawn_Statics::NewProp_LineName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTFUIManager_RequestSpawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTFUIManager_RequestSpawn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDTFUIManager, nullptr, "RequestSpawn", Z_Construct_UFunction_UDTFUIManager_RequestSpawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTFUIManager_RequestSpawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDTFUIManager_RequestSpawn_Statics::DTFUIManager_eventRequestSpawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTFUIManager_RequestSpawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDTFUIManager_RequestSpawn_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDTFUIManager_RequestSpawn_Statics::DTFUIManager_eventRequestSpawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDTFUIManager_RequestSpawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDTFUIManager_RequestSpawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDTFUIManager::execRequestSpawn)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_LineName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestSpawn(Z_Param_LineName);
	P_NATIVE_END;
}
// ********** End Class UDTFUIManager Function RequestSpawn ****************************************

// ********** Begin Class UDTFUIManager ************************************************************
void UDTFUIManager::StaticRegisterNativesUDTFUIManager()
{
	UClass* Class = UDTFUIManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BroadcastPartsSpawned", &UDTFUIManager::execBroadcastPartsSpawned },
		{ "RequestSpawn", &UDTFUIManager::execRequestSpawn },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		{ "BlueprintType", "true" },
		{ "IncludePath", "Manager/UI/DTFUIManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Manager/UI/DTFUIManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPartsSpawned_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Manager/UI/DTFUIManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSpawned_MetaData[] = {
		{ "Category", "Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \"\xeb\x9d\xbc\xec\x9d\xb8 X\xec\x97\x90\xec\x84\x9c \xed\x8c\x8c\xec\xb8\xa0 \xec\x8a\xa4\xed\x8f\xb0 \xec\x99\x84\xeb\xa3\x8c\"\n" },
#endif
		{ "ModuleRelativePath", "Manager/UI/DTFUIManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\"\xeb\x9d\xbc\xec\x9d\xb8 X\xec\x97\x90\xec\x84\x9c \xed\x8c\x8c\xec\xb8\xa0 \xec\x8a\xa4\xed\x8f\xb0 \xec\x99\x84\xeb\xa3\x8c\"" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPartsSpawned;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSpawned;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDTFUIManager_BroadcastPartsSpawned, "BroadcastPartsSpawned" }, // 3668185125
		{ &Z_Construct_UFunction_UDTFUIManager_RequestSpawn, "RequestSpawn" }, // 660628946
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDTFUIManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDTFUIManager_Statics::NewProp_OnPartsSpawned = { "OnPartsSpawned", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTFUIManager, OnPartsSpawned), Z_Construct_UDelegateFunction_DT_ProjectFinal_OnPartsSpawned__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPartsSpawned_MetaData), NewProp_OnPartsSpawned_MetaData) }; // 3014899791
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDTFUIManager_Statics::NewProp_OnSpawned = { "OnSpawned", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTFUIManager, OnSpawned), Z_Construct_UDelegateFunction_DT_ProjectFinal_OnSpawned__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSpawned_MetaData), NewProp_OnSpawned_MetaData) }; // 958957714
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDTFUIManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTFUIManager_Statics::NewProp_OnPartsSpawned,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTFUIManager_Statics::NewProp_OnSpawned,
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
	FuncInfo,
	Z_Construct_UClass_UDTFUIManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
struct Z_CompiledInDeferFile_FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_UI_DTFUIManager_h__Script_DT_ProjectFinal_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDTFUIManager, UDTFUIManager::StaticClass, TEXT("UDTFUIManager"), &Z_Registration_Info_UClass_UDTFUIManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDTFUIManager), 1453233964U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_UI_DTFUIManager_h__Script_DT_ProjectFinal_2102776488(TEXT("/Script/DT_ProjectFinal"),
	Z_CompiledInDeferFile_FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_UI_DTFUIManager_h__Script_DT_ProjectFinal_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_UI_DTFUIManager_h__Script_DT_ProjectFinal_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
