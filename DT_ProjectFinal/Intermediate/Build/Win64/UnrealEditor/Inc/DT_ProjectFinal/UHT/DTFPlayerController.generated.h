// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Manager/PlayerController/DTFPlayerController.h"

#ifdef DT_PROJECTFINAL_DTFPlayerController_generated_h
#error "DTFPlayerController.generated.h already included, missing '#pragma once' in DTFPlayerController.h"
#endif
#define DT_PROJECTFINAL_DTFPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADTFPlayerController *****************************************************
DT_PROJECTFINAL_API UClass* Z_Construct_UClass_ADTFPlayerController_NoRegister();

#define FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_PlayerController_DTFPlayerController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADTFPlayerController(); \
	friend struct Z_Construct_UClass_ADTFPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DT_PROJECTFINAL_API UClass* Z_Construct_UClass_ADTFPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ADTFPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DT_ProjectFinal"), Z_Construct_UClass_ADTFPlayerController_NoRegister) \
	DECLARE_SERIALIZER(ADTFPlayerController)


#define FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_PlayerController_DTFPlayerController_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADTFPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADTFPlayerController(ADTFPlayerController&&) = delete; \
	ADTFPlayerController(const ADTFPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADTFPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADTFPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADTFPlayerController) \
	NO_API virtual ~ADTFPlayerController();


#define FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_PlayerController_DTFPlayerController_h_10_PROLOG
#define FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_PlayerController_DTFPlayerController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_PlayerController_DTFPlayerController_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_PlayerController_DTFPlayerController_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADTFPlayerController;

// ********** End Class ADTFPlayerController *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Manager_PlayerController_DTFPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
