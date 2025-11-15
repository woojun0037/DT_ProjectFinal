// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Manager/GameInstance/DTFGameInstance.h"

#ifdef DT_PROJECTFINAL_DTFGameInstance_generated_h
#error "DTFGameInstance.generated.h already included, missing '#pragma once' in DTFGameInstance.h"
#endif
#define DT_PROJECTFINAL_DTFGameInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDTFGameInstance *********************************************************
#define FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_GameInstance_DTFGameInstance_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddPartUsage); \
	DECLARE_FUNCTION(execAddComponentedCars);


DT_PROJECTFINAL_API UClass* Z_Construct_UClass_UDTFGameInstance_NoRegister();

#define FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_GameInstance_DTFGameInstance_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDTFGameInstance(); \
	friend struct Z_Construct_UClass_UDTFGameInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DT_PROJECTFINAL_API UClass* Z_Construct_UClass_UDTFGameInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UDTFGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DT_ProjectFinal"), Z_Construct_UClass_UDTFGameInstance_NoRegister) \
	DECLARE_SERIALIZER(UDTFGameInstance)


#define FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_GameInstance_DTFGameInstance_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDTFGameInstance(UDTFGameInstance&&) = delete; \
	UDTFGameInstance(const UDTFGameInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDTFGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDTFGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDTFGameInstance) \
	NO_API virtual ~UDTFGameInstance();


#define FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_GameInstance_DTFGameInstance_h_9_PROLOG
#define FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_GameInstance_DTFGameInstance_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_GameInstance_DTFGameInstance_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_GameInstance_DTFGameInstance_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_GameInstance_DTFGameInstance_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDTFGameInstance;

// ********** End Class UDTFGameInstance ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_GameInstance_DTFGameInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
