// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Manager/UI/DTFUIManager.h"

#ifdef DT_PROJECTFINAL_DTFUIManager_generated_h
#error "DTFUIManager.generated.h already included, missing '#pragma once' in DTFUIManager.h"
#endif
#define DT_PROJECTFINAL_DTFUIManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnPartsSpawned *******************************************************
#define FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_UI_DTFUIManager_h_6_DELEGATE \
DT_PROJECTFINAL_API void FOnPartsSpawned_DelegateWrapper(const FMulticastScriptDelegate& OnPartsSpawned, FName LineName);


// ********** End Delegate FOnPartsSpawned *********************************************************

// ********** Begin Delegate FOnSpawned ************************************************************
#define FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_UI_DTFUIManager_h_7_DELEGATE \
DT_PROJECTFINAL_API void FOnSpawned_DelegateWrapper(const FMulticastScriptDelegate& OnSpawned, FName LineName);


// ********** End Delegate FOnSpawned **************************************************************

// ********** Begin Class UDTFUIManager ************************************************************
#define FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_UI_DTFUIManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBroadcastPartsSpawned); \
	DECLARE_FUNCTION(execRequestSpawn);


DT_PROJECTFINAL_API UClass* Z_Construct_UClass_UDTFUIManager_NoRegister();

#define FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_UI_DTFUIManager_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDTFUIManager(); \
	friend struct Z_Construct_UClass_UDTFUIManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DT_PROJECTFINAL_API UClass* Z_Construct_UClass_UDTFUIManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UDTFUIManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DT_ProjectFinal"), Z_Construct_UClass_UDTFUIManager_NoRegister) \
	DECLARE_SERIALIZER(UDTFUIManager)


#define FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_UI_DTFUIManager_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDTFUIManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDTFUIManager(UDTFUIManager&&) = delete; \
	UDTFUIManager(const UDTFUIManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDTFUIManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDTFUIManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDTFUIManager) \
	NO_API virtual ~UDTFUIManager();


#define FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_UI_DTFUIManager_h_9_PROLOG
#define FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_UI_DTFUIManager_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_UI_DTFUIManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_UI_DTFUIManager_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_UI_DTFUIManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDTFUIManager;

// ********** End Class UDTFUIManager **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_UI_DTFUIManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
