// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeliveryRobot/DTFDeliveryRobot.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDTFDeliveryRobot() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DT_PROJECTFINAL_API UClass* Z_Construct_UClass_ADTFDeliveryRobot();
DT_PROJECTFINAL_API UClass* Z_Construct_UClass_ADTFDeliveryRobot_NoRegister();
DT_PROJECTFINAL_API UEnum* Z_Construct_UEnum_DT_ProjectFinal_ERobotState();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_DT_ProjectFinal();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ERobotState ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERobotState;
static UEnum* ERobotState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERobotState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERobotState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DT_ProjectFinal_ERobotState, (UObject*)Z_Construct_UPackage__Script_DT_ProjectFinal(), TEXT("ERobotState"));
	}
	return Z_Registration_Info_UEnum_ERobotState.OuterSingleton;
}
template<> DT_PROJECTFINAL_API UEnum* StaticEnum<ERobotState>()
{
	return ERobotState_StaticEnum();
}
struct Z_Construct_UEnum_DT_ProjectFinal_ERobotState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dropping.Name", "ERobotState::Dropping" },
		{ "Idle.Name", "ERobotState::Idle" },
		{ "ModuleRelativePath", "DeliveryRobot/DTFDeliveryRobot.h" },
		{ "MovingToDelivery.Name", "ERobotState::MovingToDelivery" },
		{ "MovingToPickUp.Name", "ERobotState::MovingToPickUp" },
		{ "PickingUp.Name", "ERobotState::PickingUp" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERobotState::Idle", (int64)ERobotState::Idle },
		{ "ERobotState::MovingToPickUp", (int64)ERobotState::MovingToPickUp },
		{ "ERobotState::PickingUp", (int64)ERobotState::PickingUp },
		{ "ERobotState::MovingToDelivery", (int64)ERobotState::MovingToDelivery },
		{ "ERobotState::Dropping", (int64)ERobotState::Dropping },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DT_ProjectFinal_ERobotState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DT_ProjectFinal,
	nullptr,
	"ERobotState",
	"ERobotState",
	Z_Construct_UEnum_DT_ProjectFinal_ERobotState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DT_ProjectFinal_ERobotState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DT_ProjectFinal_ERobotState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DT_ProjectFinal_ERobotState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DT_ProjectFinal_ERobotState()
{
	if (!Z_Registration_Info_UEnum_ERobotState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERobotState.InnerSingleton, Z_Construct_UEnum_DT_ProjectFinal_ERobotState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERobotState.InnerSingleton;
}
// ********** End Enum ERobotState *****************************************************************

// ********** Begin Class ADTFDeliveryRobot Function DropParts *************************************
struct Z_Construct_UFunction_ADTFDeliveryRobot_DropParts_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Delivery" },
		{ "ModuleRelativePath", "DeliveryRobot/DTFDeliveryRobot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADTFDeliveryRobot_DropParts_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADTFDeliveryRobot, nullptr, "DropParts", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTFDeliveryRobot_DropParts_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADTFDeliveryRobot_DropParts_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ADTFDeliveryRobot_DropParts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADTFDeliveryRobot_DropParts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADTFDeliveryRobot::execDropParts)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DropParts();
	P_NATIVE_END;
}
// ********** End Class ADTFDeliveryRobot Function DropParts ***************************************

// ********** Begin Class ADTFDeliveryRobot Function MoveToLocation ********************************
struct Z_Construct_UFunction_ADTFDeliveryRobot_MoveToLocation_Statics
{
	struct DTFDeliveryRobot_eventMoveToLocation_Parms
	{
		FVector TargetLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Delivery" },
		{ "ModuleRelativePath", "DeliveryRobot/DTFDeliveryRobot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADTFDeliveryRobot_MoveToLocation_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTFDeliveryRobot_eventMoveToLocation_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADTFDeliveryRobot_MoveToLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADTFDeliveryRobot_MoveToLocation_Statics::NewProp_TargetLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTFDeliveryRobot_MoveToLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADTFDeliveryRobot_MoveToLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADTFDeliveryRobot, nullptr, "MoveToLocation", Z_Construct_UFunction_ADTFDeliveryRobot_MoveToLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADTFDeliveryRobot_MoveToLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADTFDeliveryRobot_MoveToLocation_Statics::DTFDeliveryRobot_eventMoveToLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTFDeliveryRobot_MoveToLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADTFDeliveryRobot_MoveToLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADTFDeliveryRobot_MoveToLocation_Statics::DTFDeliveryRobot_eventMoveToLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADTFDeliveryRobot_MoveToLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADTFDeliveryRobot_MoveToLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADTFDeliveryRobot::execMoveToLocation)
{
	P_GET_STRUCT(FVector,Z_Param_TargetLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveToLocation(Z_Param_TargetLocation);
	P_NATIVE_END;
}
// ********** End Class ADTFDeliveryRobot Function MoveToLocation **********************************

// ********** Begin Class ADTFDeliveryRobot Function OnDropComplete ********************************
static FName NAME_ADTFDeliveryRobot_OnDropComplete = FName(TEXT("OnDropComplete"));
void ADTFDeliveryRobot::OnDropComplete()
{
	UFunction* Func = FindFunctionChecked(NAME_ADTFDeliveryRobot_OnDropComplete);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ADTFDeliveryRobot_OnDropComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Delivery" },
		{ "ModuleRelativePath", "DeliveryRobot/DTFDeliveryRobot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADTFDeliveryRobot_OnDropComplete_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADTFDeliveryRobot, nullptr, "OnDropComplete", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTFDeliveryRobot_OnDropComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADTFDeliveryRobot_OnDropComplete_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ADTFDeliveryRobot_OnDropComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADTFDeliveryRobot_OnDropComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ADTFDeliveryRobot Function OnDropComplete **********************************

// ********** Begin Class ADTFDeliveryRobot Function OnPickupComplete ******************************
static FName NAME_ADTFDeliveryRobot_OnPickupComplete = FName(TEXT("OnPickupComplete"));
void ADTFDeliveryRobot::OnPickupComplete()
{
	UFunction* Func = FindFunctionChecked(NAME_ADTFDeliveryRobot_OnPickupComplete);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ADTFDeliveryRobot_OnPickupComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Delivery" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//BP\xec\x97\x90\xec\x84\x9c \xec\x98\xa4\xeb\xb2\x84\xeb\x9d\xbc\xec\x9d\xb4\xeb\x93\x9c \xea\xb0\x80\xeb\x8a\xa5\xed\x95\x9c \xec\x9d\xb4\xeb\xb2\xa4\xed\x8a\xb8\n" },
#endif
		{ "ModuleRelativePath", "DeliveryRobot/DTFDeliveryRobot.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP\xec\x97\x90\xec\x84\x9c \xec\x98\xa4\xeb\xb2\x84\xeb\x9d\xbc\xec\x9d\xb4\xeb\x93\x9c \xea\xb0\x80\xeb\x8a\xa5\xed\x95\x9c \xec\x9d\xb4\xeb\xb2\xa4\xed\x8a\xb8" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADTFDeliveryRobot_OnPickupComplete_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADTFDeliveryRobot, nullptr, "OnPickupComplete", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTFDeliveryRobot_OnPickupComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADTFDeliveryRobot_OnPickupComplete_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ADTFDeliveryRobot_OnPickupComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADTFDeliveryRobot_OnPickupComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ADTFDeliveryRobot Function OnPickupComplete ********************************

// ********** Begin Class ADTFDeliveryRobot Function PickupParts ***********************************
struct Z_Construct_UFunction_ADTFDeliveryRobot_PickupParts_Statics
{
	struct DTFDeliveryRobot_eventPickupParts_Parms
	{
		AActor* Parts;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Delivery" },
		{ "ModuleRelativePath", "DeliveryRobot/DTFDeliveryRobot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADTFDeliveryRobot_PickupParts_Statics::NewProp_Parts = { "Parts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTFDeliveryRobot_eventPickupParts_Parms, Parts), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADTFDeliveryRobot_PickupParts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADTFDeliveryRobot_PickupParts_Statics::NewProp_Parts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTFDeliveryRobot_PickupParts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADTFDeliveryRobot_PickupParts_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADTFDeliveryRobot, nullptr, "PickupParts", Z_Construct_UFunction_ADTFDeliveryRobot_PickupParts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADTFDeliveryRobot_PickupParts_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADTFDeliveryRobot_PickupParts_Statics::DTFDeliveryRobot_eventPickupParts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTFDeliveryRobot_PickupParts_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADTFDeliveryRobot_PickupParts_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADTFDeliveryRobot_PickupParts_Statics::DTFDeliveryRobot_eventPickupParts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADTFDeliveryRobot_PickupParts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADTFDeliveryRobot_PickupParts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADTFDeliveryRobot::execPickupParts)
{
	P_GET_OBJECT(AActor,Z_Param_Parts);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PickupParts(Z_Param_Parts);
	P_NATIVE_END;
}
// ********** End Class ADTFDeliveryRobot Function PickupParts *************************************

// ********** Begin Class ADTFDeliveryRobot Function StartDelivery *********************************
struct Z_Construct_UFunction_ADTFDeliveryRobot_StartDelivery_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Delivery" },
		{ "ModuleRelativePath", "DeliveryRobot/DTFDeliveryRobot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADTFDeliveryRobot_StartDelivery_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADTFDeliveryRobot, nullptr, "StartDelivery", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTFDeliveryRobot_StartDelivery_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADTFDeliveryRobot_StartDelivery_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ADTFDeliveryRobot_StartDelivery()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADTFDeliveryRobot_StartDelivery_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADTFDeliveryRobot::execStartDelivery)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartDelivery();
	P_NATIVE_END;
}
// ********** End Class ADTFDeliveryRobot Function StartDelivery ***********************************

// ********** Begin Class ADTFDeliveryRobot ********************************************************
void ADTFDeliveryRobot::StaticRegisterNativesADTFDeliveryRobot()
{
	UClass* Class = ADTFDeliveryRobot::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DropParts", &ADTFDeliveryRobot::execDropParts },
		{ "MoveToLocation", &ADTFDeliveryRobot::execMoveToLocation },
		{ "PickupParts", &ADTFDeliveryRobot::execPickupParts },
		{ "StartDelivery", &ADTFDeliveryRobot::execStartDelivery },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADTFDeliveryRobot;
UClass* ADTFDeliveryRobot::GetPrivateStaticClass()
{
	using TClass = ADTFDeliveryRobot;
	if (!Z_Registration_Info_UClass_ADTFDeliveryRobot.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DTFDeliveryRobot"),
			Z_Registration_Info_UClass_ADTFDeliveryRobot.InnerSingleton,
			StaticRegisterNativesADTFDeliveryRobot,
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
	return Z_Registration_Info_UClass_ADTFDeliveryRobot.InnerSingleton;
}
UClass* Z_Construct_UClass_ADTFDeliveryRobot_NoRegister()
{
	return ADTFDeliveryRobot::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADTFDeliveryRobot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DeliveryRobot/DTFDeliveryRobot.h" },
		{ "ModuleRelativePath", "DeliveryRobot/DTFDeliveryRobot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachPoint_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DeliveryRobot/DTFDeliveryRobot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DeliveryRobot/DTFDeliveryRobot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RobotMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DeliveryRobot/DTFDeliveryRobot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DeliveryRobot/DTFDeliveryRobot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeliveryTargets_MetaData[] = {
		{ "Category", "Delivery" },
		{ "ModuleRelativePath", "DeliveryRobot/DTFDeliveryRobot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Delivery" },
		{ "ModuleRelativePath", "DeliveryRobot/DTFDeliveryRobot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartsSpawnPoint_MetaData[] = {
		{ "Category", "Delivery" },
		{ "ModuleRelativePath", "DeliveryRobot/DTFDeliveryRobot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentParts_MetaData[] = {
		{ "Category", "Delivery" },
		{ "ModuleRelativePath", "DeliveryRobot/DTFDeliveryRobot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "Category", "Delivery" },
		{ "ModuleRelativePath", "DeliveryRobot/DTFDeliveryRobot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLineIndex_MetaData[] = {
		{ "Category", "Delivery" },
		{ "ModuleRelativePath", "DeliveryRobot/DTFDeliveryRobot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachPoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RobotMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeliveryTargets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DeliveryTargets;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PartsSpawnPoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentParts;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentLineIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADTFDeliveryRobot_DropParts, "DropParts" }, // 1648249695
		{ &Z_Construct_UFunction_ADTFDeliveryRobot_MoveToLocation, "MoveToLocation" }, // 183695457
		{ &Z_Construct_UFunction_ADTFDeliveryRobot_OnDropComplete, "OnDropComplete" }, // 4060986679
		{ &Z_Construct_UFunction_ADTFDeliveryRobot_OnPickupComplete, "OnPickupComplete" }, // 3688933499
		{ &Z_Construct_UFunction_ADTFDeliveryRobot_PickupParts, "PickupParts" }, // 188621077
		{ &Z_Construct_UFunction_ADTFDeliveryRobot_StartDelivery, "StartDelivery" }, // 1052606128
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADTFDeliveryRobot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADTFDeliveryRobot_Statics::NewProp_AttachPoint = { "AttachPoint", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTFDeliveryRobot, AttachPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachPoint_MetaData), NewProp_AttachPoint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADTFDeliveryRobot_Statics::NewProp_CapsuleComponent = { "CapsuleComponent", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTFDeliveryRobot, CapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleComponent_MetaData), NewProp_CapsuleComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADTFDeliveryRobot_Statics::NewProp_RobotMesh = { "RobotMesh", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTFDeliveryRobot, RobotMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RobotMesh_MetaData), NewProp_RobotMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADTFDeliveryRobot_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTFDeliveryRobot, MovementComponent), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementComponent_MetaData), NewProp_MovementComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADTFDeliveryRobot_Statics::NewProp_DeliveryTargets_Inner = { "DeliveryTargets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADTFDeliveryRobot_Statics::NewProp_DeliveryTargets = { "DeliveryTargets", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTFDeliveryRobot, DeliveryTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeliveryTargets_MetaData), NewProp_DeliveryTargets_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADTFDeliveryRobot_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTFDeliveryRobot, MovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSpeed_MetaData), NewProp_MovementSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADTFDeliveryRobot_Statics::NewProp_PartsSpawnPoint = { "PartsSpawnPoint", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTFDeliveryRobot, PartsSpawnPoint), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartsSpawnPoint_MetaData), NewProp_PartsSpawnPoint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADTFDeliveryRobot_Statics::NewProp_CurrentParts = { "CurrentParts", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTFDeliveryRobot, CurrentParts), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentParts_MetaData), NewProp_CurrentParts_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADTFDeliveryRobot_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADTFDeliveryRobot_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTFDeliveryRobot, CurrentState), Z_Construct_UEnum_DT_ProjectFinal_ERobotState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) }; // 167837002
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADTFDeliveryRobot_Statics::NewProp_CurrentLineIndex = { "CurrentLineIndex", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTFDeliveryRobot, CurrentLineIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLineIndex_MetaData), NewProp_CurrentLineIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADTFDeliveryRobot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTFDeliveryRobot_Statics::NewProp_AttachPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTFDeliveryRobot_Statics::NewProp_CapsuleComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTFDeliveryRobot_Statics::NewProp_RobotMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTFDeliveryRobot_Statics::NewProp_MovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTFDeliveryRobot_Statics::NewProp_DeliveryTargets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTFDeliveryRobot_Statics::NewProp_DeliveryTargets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTFDeliveryRobot_Statics::NewProp_MovementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTFDeliveryRobot_Statics::NewProp_PartsSpawnPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTFDeliveryRobot_Statics::NewProp_CurrentParts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTFDeliveryRobot_Statics::NewProp_CurrentState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTFDeliveryRobot_Statics::NewProp_CurrentState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTFDeliveryRobot_Statics::NewProp_CurrentLineIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADTFDeliveryRobot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADTFDeliveryRobot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_DT_ProjectFinal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADTFDeliveryRobot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADTFDeliveryRobot_Statics::ClassParams = {
	&ADTFDeliveryRobot::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADTFDeliveryRobot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADTFDeliveryRobot_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADTFDeliveryRobot_Statics::Class_MetaDataParams), Z_Construct_UClass_ADTFDeliveryRobot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADTFDeliveryRobot()
{
	if (!Z_Registration_Info_UClass_ADTFDeliveryRobot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADTFDeliveryRobot.OuterSingleton, Z_Construct_UClass_ADTFDeliveryRobot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADTFDeliveryRobot.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADTFDeliveryRobot);
ADTFDeliveryRobot::~ADTFDeliveryRobot() {}
// ********** End Class ADTFDeliveryRobot **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_DeliveryRobot_DTFDeliveryRobot_h__Script_DT_ProjectFinal_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERobotState_StaticEnum, TEXT("ERobotState"), &Z_Registration_Info_UEnum_ERobotState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 167837002U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADTFDeliveryRobot, ADTFDeliveryRobot::StaticClass, TEXT("ADTFDeliveryRobot"), &Z_Registration_Info_UClass_ADTFDeliveryRobot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADTFDeliveryRobot), 441089787U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_DeliveryRobot_DTFDeliveryRobot_h__Script_DT_ProjectFinal_4266474784(TEXT("/Script/DT_ProjectFinal"),
	Z_CompiledInDeferFile_FID_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_DeliveryRobot_DTFDeliveryRobot_h__Script_DT_ProjectFinal_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_DeliveryRobot_DTFDeliveryRobot_h__Script_DT_ProjectFinal_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_DeliveryRobot_DTFDeliveryRobot_h__Script_DT_ProjectFinal_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_DeliveryRobot_DTFDeliveryRobot_h__Script_DT_ProjectFinal_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
