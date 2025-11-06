// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Manager/DTFUIManager.h"

#ifdef DT_PROJECTFINAL_DTFUIManager_generated_h
#error "DTFUIManager.generated.h already included, missing '#pragma once' in DTFUIManager.h"
#endif
#define DT_PROJECTFINAL_DTFUIManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ADTFSpawnManager;
class UWorld;

// ********** Begin Delegate FOnLineSelectedDelegate ***********************************************
#define FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFUIManager_h_8_DELEGATE \
DT_PROJECTFINAL_API void FOnLineSelectedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLineSelectedDelegate, FName LineName);


// ********** End Delegate FOnLineSelectedDelegate *************************************************

// ********** Begin Class UDTFUIManager ************************************************************
#define FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFUIManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnLineButtonClicked); \
	DECLARE_FUNCTION(execSetSpawnManager); \
	DECLARE_FUNCTION(execCreatePartsSelection);


DT_PROJECTFINAL_API UClass* Z_Construct_UClass_UDTFUIManager_NoRegister();

#define FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFUIManager_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDTFUIManager(); \
	friend struct Z_Construct_UClass_UDTFUIManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DT_PROJECTFINAL_API UClass* Z_Construct_UClass_UDTFUIManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UDTFUIManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DT_ProjectFinal"), Z_Construct_UClass_UDTFUIManager_NoRegister) \
	DECLARE_SERIALIZER(UDTFUIManager)


#define FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFUIManager_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDTFUIManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDTFUIManager(UDTFUIManager&&) = delete; \
	UDTFUIManager(const UDTFUIManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDTFUIManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDTFUIManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDTFUIManager) \
	NO_API virtual ~UDTFUIManager();


#define FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFUIManager_h_10_PROLOG
#define FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFUIManager_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFUIManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFUIManager_h_13_INCLASS_NO_PURE_DECLS \
	FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFUIManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDTFUIManager;

// ********** End Class UDTFUIManager **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_DTFUIManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
