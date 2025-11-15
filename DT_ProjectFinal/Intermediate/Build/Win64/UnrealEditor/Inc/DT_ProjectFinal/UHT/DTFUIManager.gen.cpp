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
UPackage* Z_Construct_UPackage__Script_DT_ProjectFinal();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnPartsSpawned *******************************************************
struct Z_Construct_UDelegateFunction_DT_ProjectFinal_OnPartsSpawned__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Manager/UI/DTFUIManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_DT_ProjectFinal_OnPartsSpawned__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_DT_ProjectFinal, nullptr, "OnPartsSpawned__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DT_ProjectFinal_OnPartsSpawned__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DT_ProjectFinal_OnPartsSpawned__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_DT_ProjectFinal_OnPartsSpawned__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DT_ProjectFinal_OnPartsSpawned__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPartsSpawned_DelegateWrapper(const FMulticastScriptDelegate& OnPartsSpawned)
{
	OnPartsSpawned.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnPartsSpawned *********************************************************

// ********** Begin Class UDTFUIManager Function BroadcastPartsSpawned *****************************
struct Z_Construct_UFunction_UDTFUIManager_BroadcastPartsSpawned_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Manager/UI/DTFUIManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTFUIManager_BroadcastPartsSpawned_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDTFUIManager, nullptr, "BroadcastPartsSpawned", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTFUIManager_BroadcastPartsSpawned_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDTFUIManager_BroadcastPartsSpawned_Statics::Function_MetaDataParams)},  };
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
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BroadcastPartsSpawned();
	P_NATIVE_END;
}
// ********** End Class UDTFUIManager Function BroadcastPartsSpawned *******************************

// ********** Begin Class UDTFUIManager ************************************************************
void UDTFUIManager::StaticRegisterNativesUDTFUIManager()
{
	UClass* Class = UDTFUIManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BroadcastPartsSpawned", &UDTFUIManager::execBroadcastPartsSpawned },
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
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPartsSpawned;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDTFUIManager_BroadcastPartsSpawned, "BroadcastPartsSpawned" }, // 926307237
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDTFUIManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDTFUIManager_Statics::NewProp_OnPartsSpawned = { "OnPartsSpawned", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTFUIManager, OnPartsSpawned), Z_Construct_UDelegateFunction_DT_ProjectFinal_OnPartsSpawned__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPartsSpawned_MetaData), NewProp_OnPartsSpawned_MetaData) }; // 2300269106
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDTFUIManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTFUIManager_Statics::NewProp_OnPartsSpawned,
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
		{ Z_Construct_UClass_UDTFUIManager, UDTFUIManager::StaticClass, TEXT("UDTFUIManager"), &Z_Registration_Info_UClass_UDTFUIManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDTFUIManager), 3427051913U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_UI_DTFUIManager_h__Script_DT_ProjectFinal_143077230(TEXT("/Script/DT_ProjectFinal"),
	Z_CompiledInDeferFile_FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_UI_DTFUIManager_h__Script_DT_ProjectFinal_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_UI_DTFUIManager_h__Script_DT_ProjectFinal_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
