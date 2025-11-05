// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/UPartInterface.h"

#ifdef DT_PROJECTFINAL_UPartInterface_generated_h
#error "UPartInterface.generated.h already included, missing '#pragma once' in UPartInterface.h"
#endif
#define DT_PROJECTFINAL_UPartInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UUPartInterface ******************************************************
DT_PROJECTFINAL_API UClass* Z_Construct_UClass_UUPartInterface_NoRegister();

#define FID_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Interface_UPartInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DT_PROJECTFINAL_API UUPartInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUPartInterface(UUPartInterface&&) = delete; \
	UUPartInterface(const UUPartInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DT_PROJECTFINAL_API, UUPartInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUPartInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUPartInterface) \
	virtual ~UUPartInterface() = default;


#define FID_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Interface_UPartInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUPartInterface(); \
	friend struct Z_Construct_UClass_UUPartInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DT_PROJECTFINAL_API UClass* Z_Construct_UClass_UUPartInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UUPartInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DT_ProjectFinal"), Z_Construct_UClass_UUPartInterface_NoRegister) \
	DECLARE_SERIALIZER(UUPartInterface)


#define FID_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Interface_UPartInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Interface_UPartInterface_h_10_GENERATED_UINTERFACE_BODY() \
	FID_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Interface_UPartInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Interface_UPartInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUPartInterface() {} \
public: \
	typedef UUPartInterface UClassType; \
	typedef IUPartInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Interface_UPartInterface_h_7_PROLOG
#define FID_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Interface_UPartInterface_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Interface_UPartInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUPartInterface;

// ********** End Interface UUPartInterface ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Interface_UPartInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
