// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/DTFLineOrderWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDTFLineOrderWidget() {}

// ********** Begin Cross Module References ********************************************************
DT_PROJECTFINAL_API UClass* Z_Construct_UClass_UDTFLineOrderWidget();
DT_PROJECTFINAL_API UClass* Z_Construct_UClass_UDTFLineOrderWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_DT_ProjectFinal();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDTFLineOrderWidget ******************************************************
void UDTFLineOrderWidget::StaticRegisterNativesUDTFLineOrderWidget()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDTFLineOrderWidget;
UClass* UDTFLineOrderWidget::GetPrivateStaticClass()
{
	using TClass = UDTFLineOrderWidget;
	if (!Z_Registration_Info_UClass_UDTFLineOrderWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DTFLineOrderWidget"),
			Z_Registration_Info_UClass_UDTFLineOrderWidget.InnerSingleton,
			StaticRegisterNativesUDTFLineOrderWidget,
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
	return Z_Registration_Info_UClass_UDTFLineOrderWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UDTFLineOrderWidget_NoRegister()
{
	return UDTFLineOrderWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDTFLineOrderWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/DTFLineOrderWidget.h" },
		{ "ModuleRelativePath", "UI/DTFLineOrderWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineA_Btn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/DTFLineOrderWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineB_Btn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/DTFLineOrderWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineC_Btn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/DTFLineOrderWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LineA_Btn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LineB_Btn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LineC_Btn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDTFLineOrderWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDTFLineOrderWidget_Statics::NewProp_LineA_Btn = { "LineA_Btn", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTFLineOrderWidget, LineA_Btn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineA_Btn_MetaData), NewProp_LineA_Btn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDTFLineOrderWidget_Statics::NewProp_LineB_Btn = { "LineB_Btn", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTFLineOrderWidget, LineB_Btn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineB_Btn_MetaData), NewProp_LineB_Btn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDTFLineOrderWidget_Statics::NewProp_LineC_Btn = { "LineC_Btn", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTFLineOrderWidget, LineC_Btn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineC_Btn_MetaData), NewProp_LineC_Btn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDTFLineOrderWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTFLineOrderWidget_Statics::NewProp_LineA_Btn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTFLineOrderWidget_Statics::NewProp_LineB_Btn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTFLineOrderWidget_Statics::NewProp_LineC_Btn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDTFLineOrderWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDTFLineOrderWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_DT_ProjectFinal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDTFLineOrderWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDTFLineOrderWidget_Statics::ClassParams = {
	&UDTFLineOrderWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDTFLineOrderWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDTFLineOrderWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDTFLineOrderWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UDTFLineOrderWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDTFLineOrderWidget()
{
	if (!Z_Registration_Info_UClass_UDTFLineOrderWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDTFLineOrderWidget.OuterSingleton, Z_Construct_UClass_UDTFLineOrderWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDTFLineOrderWidget.OuterSingleton;
}
UDTFLineOrderWidget::UDTFLineOrderWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDTFLineOrderWidget);
UDTFLineOrderWidget::~UDTFLineOrderWidget() {}
// ********** End Class UDTFLineOrderWidget ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_UI_DTFLineOrderWidget_h__Script_DT_ProjectFinal_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDTFLineOrderWidget, UDTFLineOrderWidget::StaticClass, TEXT("UDTFLineOrderWidget"), &Z_Registration_Info_UClass_UDTFLineOrderWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDTFLineOrderWidget), 3687848866U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_UI_DTFLineOrderWidget_h__Script_DT_ProjectFinal_8930805(TEXT("/Script/DT_ProjectFinal"),
	Z_CompiledInDeferFile_FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_UI_DTFLineOrderWidget_h__Script_DT_ProjectFinal_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_BCA_PC20_Desktop_DT_ProjectFinal_DT_ProjectFinal_Source_DT_ProjectFinal_UI_DTFLineOrderWidget_h__Script_DT_ProjectFinal_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
