// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Manager/DTFSpawnManager.h"

#ifdef DT_PROJECTFINAL_DTFSpawnManager_generated_h
#error "DTFSpawnManager.generated.h already included, missing '#pragma once' in DTFSpawnManager.h"
#endif
#define DT_PROJECTFINAL_DTFSpawnManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;

// ********** Begin ScriptStruct FPartActorArray ***************************************************
#define FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFSpawnManager_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPartActorArray_Statics; \
	DT_PROJECTFINAL_API static class UScriptStruct* StaticStruct();


struct FPartActorArray;
// ********** End ScriptStruct FPartActorArray *****************************************************

// ********** Begin Class ADTFSpawnManager *********************************************************
#define FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFSpawnManager_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPartsActorClass);


DT_PROJECTFINAL_API UClass* Z_Construct_UClass_ADTFSpawnManager_NoRegister();

#define FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFSpawnManager_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADTFSpawnManager(); \
	friend struct Z_Construct_UClass_ADTFSpawnManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DT_PROJECTFINAL_API UClass* Z_Construct_UClass_ADTFSpawnManager_NoRegister(); \
public: \
	DECLARE_CLASS2(ADTFSpawnManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DT_ProjectFinal"), Z_Construct_UClass_ADTFSpawnManager_NoRegister) \
	DECLARE_SERIALIZER(ADTFSpawnManager)


#define FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFSpawnManager_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADTFSpawnManager(ADTFSpawnManager&&) = delete; \
	ADTFSpawnManager(const ADTFSpawnManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADTFSpawnManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADTFSpawnManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADTFSpawnManager) \
	NO_API virtual ~ADTFSpawnManager();


#define FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFSpawnManager_h_19_PROLOG
#define FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFSpawnManager_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFSpawnManager_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFSpawnManager_h_22_INCLASS_NO_PURE_DECLS \
	FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFSpawnManager_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADTFSpawnManager;

// ********** End Class ADTFSpawnManager ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFSpawnManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
