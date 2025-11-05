// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataAsset/DTFDataAsset.h"

#ifdef DT_PROJECTFINAL_DTFDataAsset_generated_h
#error "DTFDataAsset.generated.h already included, missing '#pragma once' in DTFDataAsset.h"
#endif
#define DT_PROJECTFINAL_DTFDataAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPartsInfo ********************************************************
#define FID_DT_ProjectFinal_Source_DT_ProjectFinal_DataAsset_DTFDataAsset_h_9_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPartsInfo_Statics; \
	DT_PROJECTFINAL_API static class UScriptStruct* StaticStruct();


struct FPartsInfo;
// ********** End ScriptStruct FPartsInfo **********************************************************

// ********** Begin Class UDTFDataAsset ************************************************************
DT_PROJECTFINAL_API UClass* Z_Construct_UClass_UDTFDataAsset_NoRegister();

#define FID_DT_ProjectFinal_Source_DT_ProjectFinal_DataAsset_DTFDataAsset_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDTFDataAsset(); \
	friend struct Z_Construct_UClass_UDTFDataAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DT_PROJECTFINAL_API UClass* Z_Construct_UClass_UDTFDataAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UDTFDataAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DT_ProjectFinal"), Z_Construct_UClass_UDTFDataAsset_NoRegister) \
	DECLARE_SERIALIZER(UDTFDataAsset)


#define FID_DT_ProjectFinal_Source_DT_ProjectFinal_DataAsset_DTFDataAsset_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDTFDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDTFDataAsset(UDTFDataAsset&&) = delete; \
	UDTFDataAsset(const UDTFDataAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDTFDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDTFDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDTFDataAsset) \
	NO_API virtual ~UDTFDataAsset();


#define FID_DT_ProjectFinal_Source_DT_ProjectFinal_DataAsset_DTFDataAsset_h_53_PROLOG
#define FID_DT_ProjectFinal_Source_DT_ProjectFinal_DataAsset_DTFDataAsset_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DT_ProjectFinal_Source_DT_ProjectFinal_DataAsset_DTFDataAsset_h_56_INCLASS_NO_PURE_DECLS \
	FID_DT_ProjectFinal_Source_DT_ProjectFinal_DataAsset_DTFDataAsset_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDTFDataAsset;

// ********** End Class UDTFDataAsset **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DT_ProjectFinal_Source_DT_ProjectFinal_DataAsset_DTFDataAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
