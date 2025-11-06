// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DeliveryRobot/DTFDeliveryRobot.h"

#ifdef DT_PROJECTFINAL_DTFDeliveryRobot_generated_h
#error "DTFDeliveryRobot.generated.h already included, missing '#pragma once' in DTFDeliveryRobot.h"
#endif
#define DT_PROJECTFINAL_DTFDeliveryRobot_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;

// ********** Begin Class ADTFDeliveryRobot ********************************************************
#define FID_DT_ProjectFinal_Source_DT_ProjectFinal_DeliveryRobot_DTFDeliveryRobot_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStartDelivery); \
	DECLARE_FUNCTION(execDropParts); \
	DECLARE_FUNCTION(execPickupParts); \
	DECLARE_FUNCTION(execMoveToLocation);


#define FID_DT_ProjectFinal_Source_DT_ProjectFinal_DeliveryRobot_DTFDeliveryRobot_h_26_CALLBACK_WRAPPERS
DT_PROJECTFINAL_API UClass* Z_Construct_UClass_ADTFDeliveryRobot_NoRegister();

#define FID_DT_ProjectFinal_Source_DT_ProjectFinal_DeliveryRobot_DTFDeliveryRobot_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADTFDeliveryRobot(); \
	friend struct Z_Construct_UClass_ADTFDeliveryRobot_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DT_PROJECTFINAL_API UClass* Z_Construct_UClass_ADTFDeliveryRobot_NoRegister(); \
public: \
	DECLARE_CLASS2(ADTFDeliveryRobot, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DT_ProjectFinal"), Z_Construct_UClass_ADTFDeliveryRobot_NoRegister) \
	DECLARE_SERIALIZER(ADTFDeliveryRobot)


#define FID_DT_ProjectFinal_Source_DT_ProjectFinal_DeliveryRobot_DTFDeliveryRobot_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADTFDeliveryRobot(ADTFDeliveryRobot&&) = delete; \
	ADTFDeliveryRobot(const ADTFDeliveryRobot&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADTFDeliveryRobot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADTFDeliveryRobot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADTFDeliveryRobot) \
	NO_API virtual ~ADTFDeliveryRobot();


#define FID_DT_ProjectFinal_Source_DT_ProjectFinal_DeliveryRobot_DTFDeliveryRobot_h_23_PROLOG
#define FID_DT_ProjectFinal_Source_DT_ProjectFinal_DeliveryRobot_DTFDeliveryRobot_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DT_ProjectFinal_Source_DT_ProjectFinal_DeliveryRobot_DTFDeliveryRobot_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DT_ProjectFinal_Source_DT_ProjectFinal_DeliveryRobot_DTFDeliveryRobot_h_26_CALLBACK_WRAPPERS \
	FID_DT_ProjectFinal_Source_DT_ProjectFinal_DeliveryRobot_DTFDeliveryRobot_h_26_INCLASS_NO_PURE_DECLS \
	FID_DT_ProjectFinal_Source_DT_ProjectFinal_DeliveryRobot_DTFDeliveryRobot_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADTFDeliveryRobot;

// ********** End Class ADTFDeliveryRobot **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DT_ProjectFinal_Source_DT_ProjectFinal_DeliveryRobot_DTFDeliveryRobot_h

// ********** Begin Enum ERobotState ***************************************************************
#define FOREACH_ENUM_EROBOTSTATE(op) \
	op(ERobotState::Idle) \
	op(ERobotState::MovingToPickUp) \
	op(ERobotState::PickingUp) \
	op(ERobotState::MovingToDelivery) \
	op(ERobotState::Dropping) 

enum class ERobotState : uint8;
template<> struct TIsUEnumClass<ERobotState> { enum { Value = true }; };
template<> DT_PROJECTFINAL_API UEnum* StaticEnum<ERobotState>();
// ********** End Enum ERobotState *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
