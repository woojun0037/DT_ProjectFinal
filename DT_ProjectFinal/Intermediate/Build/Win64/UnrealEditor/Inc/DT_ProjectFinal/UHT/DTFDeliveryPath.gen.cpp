// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Spline/DTFDeliveryPath.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDTFDeliveryPath() {}

// ********** Begin Cross Module References ********************************************************
DT_PROJECTFINAL_API UClass* Z_Construct_UClass_ADTFDeliveryPath();
DT_PROJECTFINAL_API UClass* Z_Construct_UClass_ADTFDeliveryPath_NoRegister();
DT_PROJECTFINAL_API UScriptStruct* Z_Construct_UScriptStruct_FDeliveryStopPoint();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_DT_ProjectFinal();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FDeliveryStopPoint ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDeliveryStopPoint;
class UScriptStruct* FDeliveryStopPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDeliveryStopPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDeliveryStopPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDeliveryStopPoint, (UObject*)Z_Construct_UPackage__Script_DT_ProjectFinal(), TEXT("DeliveryStopPoint"));
	}
	return Z_Registration_Info_UScriptStruct_FDeliveryStopPoint.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FDeliveryStopPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Spline/DTFDeliveryPath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "Stop" },
		{ "ModuleRelativePath", "Spline/DTFDeliveryPath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopName_MetaData[] = {
		{ "Category", "Stop" },
		{ "ModuleRelativePath", "Spline/DTFDeliveryPath.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StopName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDeliveryStopPoint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDeliveryStopPoint_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeliveryStopPoint, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDeliveryStopPoint_Statics::NewProp_StopName = { "StopName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeliveryStopPoint, StopName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopName_MetaData), NewProp_StopName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDeliveryStopPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeliveryStopPoint_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeliveryStopPoint_Statics::NewProp_StopName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeliveryStopPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDeliveryStopPoint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DT_ProjectFinal,
	nullptr,
	&NewStructOps,
	"DeliveryStopPoint",
	Z_Construct_UScriptStruct_FDeliveryStopPoint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeliveryStopPoint_Statics::PropPointers),
	sizeof(FDeliveryStopPoint),
	alignof(FDeliveryStopPoint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeliveryStopPoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDeliveryStopPoint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDeliveryStopPoint()
{
	if (!Z_Registration_Info_UScriptStruct_FDeliveryStopPoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDeliveryStopPoint.InnerSingleton, Z_Construct_UScriptStruct_FDeliveryStopPoint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FDeliveryStopPoint.InnerSingleton;
}
// ********** End ScriptStruct FDeliveryStopPoint **************************************************

// ********** Begin Class ADTFDeliveryPath *********************************************************
void ADTFDeliveryPath::StaticRegisterNativesADTFDeliveryPath()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADTFDeliveryPath;
UClass* ADTFDeliveryPath::GetPrivateStaticClass()
{
	using TClass = ADTFDeliveryPath;
	if (!Z_Registration_Info_UClass_ADTFDeliveryPath.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DTFDeliveryPath"),
			Z_Registration_Info_UClass_ADTFDeliveryPath.InnerSingleton,
			StaticRegisterNativesADTFDeliveryPath,
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
	return Z_Registration_Info_UClass_ADTFDeliveryPath.InnerSingleton;
}
UClass* Z_Construct_UClass_ADTFDeliveryPath_NoRegister()
{
	return ADTFDeliveryPath::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADTFDeliveryPath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Spline/DTFDeliveryPath.h" },
		{ "ModuleRelativePath", "Spline/DTFDeliveryPath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathSpline_MetaData[] = {
		{ "Category", "Path" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Spline/DTFDeliveryPath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stop_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Spline/DTFDeliveryPath.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PathSpline;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stop_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Stop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADTFDeliveryPath>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADTFDeliveryPath_Statics::NewProp_PathSpline = { "PathSpline", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTFDeliveryPath, PathSpline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathSpline_MetaData), NewProp_PathSpline_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADTFDeliveryPath_Statics::NewProp_Stop_Inner = { "Stop", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDeliveryStopPoint, METADATA_PARAMS(0, nullptr) }; // 1043350623
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADTFDeliveryPath_Statics::NewProp_Stop = { "Stop", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTFDeliveryPath, Stop), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stop_MetaData), NewProp_Stop_MetaData) }; // 1043350623
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADTFDeliveryPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTFDeliveryPath_Statics::NewProp_PathSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTFDeliveryPath_Statics::NewProp_Stop_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTFDeliveryPath_Statics::NewProp_Stop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADTFDeliveryPath_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADTFDeliveryPath_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DT_ProjectFinal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADTFDeliveryPath_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADTFDeliveryPath_Statics::ClassParams = {
	&ADTFDeliveryPath::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADTFDeliveryPath_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADTFDeliveryPath_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADTFDeliveryPath_Statics::Class_MetaDataParams), Z_Construct_UClass_ADTFDeliveryPath_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADTFDeliveryPath()
{
	if (!Z_Registration_Info_UClass_ADTFDeliveryPath.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADTFDeliveryPath.OuterSingleton, Z_Construct_UClass_ADTFDeliveryPath_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADTFDeliveryPath.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADTFDeliveryPath);
ADTFDeliveryPath::~ADTFDeliveryPath() {}
// ********** End Class ADTFDeliveryPath ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Spline_DTFDeliveryPath_h__Script_DT_ProjectFinal_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDeliveryStopPoint::StaticStruct, Z_Construct_UScriptStruct_FDeliveryStopPoint_Statics::NewStructOps, TEXT("DeliveryStopPoint"), &Z_Registration_Info_UScriptStruct_FDeliveryStopPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDeliveryStopPoint), 1043350623U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADTFDeliveryPath, ADTFDeliveryPath::StaticClass, TEXT("ADTFDeliveryPath"), &Z_Registration_Info_UClass_ADTFDeliveryPath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADTFDeliveryPath), 3708832504U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Spline_DTFDeliveryPath_h__Script_DT_ProjectFinal_3819840651(TEXT("/Script/DT_ProjectFinal"),
	Z_CompiledInDeferFile_FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Spline_DTFDeliveryPath_h__Script_DT_ProjectFinal_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Spline_DTFDeliveryPath_h__Script_DT_ProjectFinal_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Spline_DTFDeliveryPath_h__Script_DT_ProjectFinal_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_Spline_DTFDeliveryPath_h__Script_DT_ProjectFinal_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
