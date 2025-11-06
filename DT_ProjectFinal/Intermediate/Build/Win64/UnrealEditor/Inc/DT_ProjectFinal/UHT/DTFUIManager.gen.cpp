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
DT_PROJECTFINAL_API UClass* Z_Construct_UClass_ADTFSpawnManager_NoRegister();
DT_PROJECTFINAL_API UClass* Z_Construct_UClass_UDTFUIManager();
DT_PROJECTFINAL_API UClass* Z_Construct_UClass_UDTFUIManager_NoRegister();
DT_PROJECTFINAL_API UFunction* Z_Construct_UDelegateFunction_DT_ProjectFinal_OnLineSelectedDelegate__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_DT_ProjectFinal();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnLineSelectedDelegate ***********************************************
struct Z_Construct_UDelegateFunction_DT_ProjectFinal_OnLineSelectedDelegate__DelegateSignature_Statics
{
	struct _Script_DT_ProjectFinal_eventOnLineSelectedDelegate_Parms
	{
		FName LineName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Manager/DTFUIManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_LineName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_DT_ProjectFinal_OnLineSelectedDelegate__DelegateSignature_Statics::NewProp_LineName = { "LineName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DT_ProjectFinal_eventOnLineSelectedDelegate_Parms, LineName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DT_ProjectFinal_OnLineSelectedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DT_ProjectFinal_OnLineSelectedDelegate__DelegateSignature_Statics::NewProp_LineName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DT_ProjectFinal_OnLineSelectedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_DT_ProjectFinal_OnLineSelectedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_DT_ProjectFinal, nullptr, "OnLineSelectedDelegate__DelegateSignature", Z_Construct_UDelegateFunction_DT_ProjectFinal_OnLineSelectedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DT_ProjectFinal_OnLineSelectedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DT_ProjectFinal_OnLineSelectedDelegate__DelegateSignature_Statics::_Script_DT_ProjectFinal_eventOnLineSelectedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DT_ProjectFinal_OnLineSelectedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DT_ProjectFinal_OnLineSelectedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_DT_ProjectFinal_OnLineSelectedDelegate__DelegateSignature_Statics::_Script_DT_ProjectFinal_eventOnLineSelectedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_DT_ProjectFinal_OnLineSelectedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DT_ProjectFinal_OnLineSelectedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLineSelectedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLineSelectedDelegate, FName LineName)
{
	struct _Script_DT_ProjectFinal_eventOnLineSelectedDelegate_Parms
	{
		FName LineName;
	};
	_Script_DT_ProjectFinal_eventOnLineSelectedDelegate_Parms Parms;
	Parms.LineName=LineName;
	OnLineSelectedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnLineSelectedDelegate *************************************************

// ********** Begin Class UDTFUIManager Function CreatePartsSelection ******************************
struct Z_Construct_UFunction_UDTFUIManager_CreatePartsSelection_Statics
{
	struct DTFUIManager_eventCreatePartsSelection_Parms
	{
		UWorld* World;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Manager/DTFUIManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDTFUIManager_CreatePartsSelection_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTFUIManager_eventCreatePartsSelection_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDTFUIManager_CreatePartsSelection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTFUIManager_CreatePartsSelection_Statics::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTFUIManager_CreatePartsSelection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTFUIManager_CreatePartsSelection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDTFUIManager, nullptr, "CreatePartsSelection", Z_Construct_UFunction_UDTFUIManager_CreatePartsSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTFUIManager_CreatePartsSelection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDTFUIManager_CreatePartsSelection_Statics::DTFUIManager_eventCreatePartsSelection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTFUIManager_CreatePartsSelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDTFUIManager_CreatePartsSelection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDTFUIManager_CreatePartsSelection_Statics::DTFUIManager_eventCreatePartsSelection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDTFUIManager_CreatePartsSelection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDTFUIManager_CreatePartsSelection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDTFUIManager::execCreatePartsSelection)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreatePartsSelection(Z_Param_World);
	P_NATIVE_END;
}
// ********** End Class UDTFUIManager Function CreatePartsSelection ********************************

// ********** Begin Class UDTFUIManager Function OnLineButtonClicked *******************************
struct Z_Construct_UFunction_UDTFUIManager_OnLineButtonClicked_Statics
{
	struct DTFUIManager_eventOnLineButtonClicked_Parms
	{
		FName LineName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Manager/DTFUIManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_LineName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDTFUIManager_OnLineButtonClicked_Statics::NewProp_LineName = { "LineName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTFUIManager_eventOnLineButtonClicked_Parms, LineName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDTFUIManager_OnLineButtonClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTFUIManager_OnLineButtonClicked_Statics::NewProp_LineName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTFUIManager_OnLineButtonClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTFUIManager_OnLineButtonClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDTFUIManager, nullptr, "OnLineButtonClicked", Z_Construct_UFunction_UDTFUIManager_OnLineButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTFUIManager_OnLineButtonClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDTFUIManager_OnLineButtonClicked_Statics::DTFUIManager_eventOnLineButtonClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTFUIManager_OnLineButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDTFUIManager_OnLineButtonClicked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDTFUIManager_OnLineButtonClicked_Statics::DTFUIManager_eventOnLineButtonClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDTFUIManager_OnLineButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDTFUIManager_OnLineButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDTFUIManager::execOnLineButtonClicked)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_LineName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLineButtonClicked(Z_Param_LineName);
	P_NATIVE_END;
}
// ********** End Class UDTFUIManager Function OnLineButtonClicked *********************************

// ********** Begin Class UDTFUIManager Function SetSpawnManager ***********************************
struct Z_Construct_UFunction_UDTFUIManager_SetSpawnManager_Statics
{
	struct DTFUIManager_eventSetSpawnManager_Parms
	{
		ADTFSpawnManager* InSpawnManager;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Manager/DTFUIManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSpawnManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDTFUIManager_SetSpawnManager_Statics::NewProp_InSpawnManager = { "InSpawnManager", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTFUIManager_eventSetSpawnManager_Parms, InSpawnManager), Z_Construct_UClass_ADTFSpawnManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDTFUIManager_SetSpawnManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTFUIManager_SetSpawnManager_Statics::NewProp_InSpawnManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTFUIManager_SetSpawnManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTFUIManager_SetSpawnManager_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDTFUIManager, nullptr, "SetSpawnManager", Z_Construct_UFunction_UDTFUIManager_SetSpawnManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTFUIManager_SetSpawnManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDTFUIManager_SetSpawnManager_Statics::DTFUIManager_eventSetSpawnManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTFUIManager_SetSpawnManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDTFUIManager_SetSpawnManager_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDTFUIManager_SetSpawnManager_Statics::DTFUIManager_eventSetSpawnManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDTFUIManager_SetSpawnManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDTFUIManager_SetSpawnManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDTFUIManager::execSetSpawnManager)
{
	P_GET_OBJECT(ADTFSpawnManager,Z_Param_InSpawnManager);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSpawnManager(Z_Param_InSpawnManager);
	P_NATIVE_END;
}
// ********** End Class UDTFUIManager Function SetSpawnManager *************************************

// ********** Begin Class UDTFUIManager ************************************************************
void UDTFUIManager::StaticRegisterNativesUDTFUIManager()
{
	UClass* Class = UDTFUIManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreatePartsSelection", &UDTFUIManager::execCreatePartsSelection },
		{ "OnLineButtonClicked", &UDTFUIManager::execOnLineButtonClicked },
		{ "SetSpawnManager", &UDTFUIManager::execSetSpawnManager },
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
		{ "IncludePath", "Manager/DTFUIManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Manager/DTFUIManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartSelectionWidgetClass_MetaData[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Manager/DTFUIManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartSelectionWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Manager/DTFUIManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnManager_MetaData[] = {
		{ "Category", "Spawn Manager" },
		{ "ModuleRelativePath", "Manager/DTFUIManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLineSelected_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Manager/DTFUIManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PartSelectionWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PartSelectionWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnManager;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLineSelected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDTFUIManager_CreatePartsSelection, "CreatePartsSelection" }, // 1389376920
		{ &Z_Construct_UFunction_UDTFUIManager_OnLineButtonClicked, "OnLineButtonClicked" }, // 1612117661
		{ &Z_Construct_UFunction_UDTFUIManager_SetSpawnManager, "SetSpawnManager" }, // 4223959331
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDTFUIManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDTFUIManager_Statics::NewProp_PartSelectionWidgetClass = { "PartSelectionWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTFUIManager, PartSelectionWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartSelectionWidgetClass_MetaData), NewProp_PartSelectionWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDTFUIManager_Statics::NewProp_PartSelectionWidget = { "PartSelectionWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTFUIManager, PartSelectionWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartSelectionWidget_MetaData), NewProp_PartSelectionWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDTFUIManager_Statics::NewProp_SpawnManager = { "SpawnManager", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTFUIManager, SpawnManager), Z_Construct_UClass_ADTFSpawnManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnManager_MetaData), NewProp_SpawnManager_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDTFUIManager_Statics::NewProp_OnLineSelected = { "OnLineSelected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTFUIManager, OnLineSelected), Z_Construct_UDelegateFunction_DT_ProjectFinal_OnLineSelectedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLineSelected_MetaData), NewProp_OnLineSelected_MetaData) }; // 3466185149
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDTFUIManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTFUIManager_Statics::NewProp_PartSelectionWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTFUIManager_Statics::NewProp_PartSelectionWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTFUIManager_Statics::NewProp_SpawnManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTFUIManager_Statics::NewProp_OnLineSelected,
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
struct Z_CompiledInDeferFile_FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFUIManager_h__Script_DT_ProjectFinal_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDTFUIManager, UDTFUIManager::StaticClass, TEXT("UDTFUIManager"), &Z_Registration_Info_UClass_UDTFUIManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDTFUIManager), 2479917248U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFUIManager_h__Script_DT_ProjectFinal_814132056(TEXT("/Script/DT_ProjectFinal"),
	Z_CompiledInDeferFile_FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFUIManager_h__Script_DT_ProjectFinal_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFUIManager_h__Script_DT_ProjectFinal_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
