// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "B2_OllyHepworthPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeB2_OllyHepworthPlayerController() {}

// ********** Begin Cross Module References ********************************************************
B2_OLLYHEPWORTH_API UClass* Z_Construct_UClass_AB2_OllyHepworthPlayerController();
B2_OLLYHEPWORTH_API UClass* Z_Construct_UClass_AB2_OllyHepworthPlayerController_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_B2_OllyHepworth();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AB2_OllyHepworthPlayerController *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AB2_OllyHepworthPlayerController;
UClass* AB2_OllyHepworthPlayerController::GetPrivateStaticClass()
{
	using TClass = AB2_OllyHepworthPlayerController;
	if (!Z_Registration_Info_UClass_AB2_OllyHepworthPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("B2_OllyHepworthPlayerController"),
			Z_Registration_Info_UClass_AB2_OllyHepworthPlayerController.InnerSingleton,
			StaticRegisterNativesAB2_OllyHepworthPlayerController,
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
	return Z_Registration_Info_UClass_AB2_OllyHepworthPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AB2_OllyHepworthPlayerController_NoRegister()
{
	return AB2_OllyHepworthPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AB2_OllyHepworthPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic PlayerController class for a third person game\n *  Manages input mappings\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "B2_OllyHepworthPlayerController.h" },
		{ "ModuleRelativePath", "B2_OllyHepworthPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic PlayerController class for a third person game\nManages input mappings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContexts_MetaData[] = {
		{ "Category", "Input|Input Mappings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Contexts */" },
#endif
		{ "ModuleRelativePath", "B2_OllyHepworthPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Contexts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileExcludedMappingContexts_MetaData[] = {
		{ "Category", "Input|Input Mappings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Contexts */" },
#endif
		{ "ModuleRelativePath", "B2_OllyHepworthPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Contexts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileControlsWidgetClass_MetaData[] = {
		{ "Category", "Input|Touch Controls" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mobile controls widget to spawn */" },
#endif
		{ "ModuleRelativePath", "B2_OllyHepworthPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mobile controls widget to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileControlsWidget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pointer to the mobile controls widget */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "B2_OllyHepworthPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointer to the mobile controls widget" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceTouchControls_MetaData[] = {
		{ "Category", "Input|Touch Controls" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, the player will use UMG touch controls even if not playing on mobile platforms */" },
#endif
		{ "ModuleRelativePath", "B2_OllyHepworthPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the player will use UMG touch controls even if not playing on mobile platforms" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AB2_OllyHepworthPlayerController constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultMappingContexts;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MobileExcludedMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MobileExcludedMappingContexts;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MobileControlsWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MobileControlsWidget;
	static void NewProp_bForceTouchControls_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceTouchControls;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AB2_OllyHepworthPlayerController constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AB2_OllyHepworthPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AB2_OllyHepworthPlayerController_Statics

// ********** Begin Class AB2_OllyHepworthPlayerController Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AB2_OllyHepworthPlayerController_Statics::NewProp_DefaultMappingContexts_Inner = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AB2_OllyHepworthPlayerController_Statics::NewProp_DefaultMappingContexts = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AB2_OllyHepworthPlayerController, DefaultMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContexts_MetaData), NewProp_DefaultMappingContexts_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AB2_OllyHepworthPlayerController_Statics::NewProp_MobileExcludedMappingContexts_Inner = { "MobileExcludedMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AB2_OllyHepworthPlayerController_Statics::NewProp_MobileExcludedMappingContexts = { "MobileExcludedMappingContexts", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AB2_OllyHepworthPlayerController, MobileExcludedMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileExcludedMappingContexts_MetaData), NewProp_MobileExcludedMappingContexts_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AB2_OllyHepworthPlayerController_Statics::NewProp_MobileControlsWidgetClass = { "MobileControlsWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AB2_OllyHepworthPlayerController, MobileControlsWidgetClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileControlsWidgetClass_MetaData), NewProp_MobileControlsWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AB2_OllyHepworthPlayerController_Statics::NewProp_MobileControlsWidget = { "MobileControlsWidget", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AB2_OllyHepworthPlayerController, MobileControlsWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileControlsWidget_MetaData), NewProp_MobileControlsWidget_MetaData) };
void Z_Construct_UClass_AB2_OllyHepworthPlayerController_Statics::NewProp_bForceTouchControls_SetBit(void* Obj)
{
	((AB2_OllyHepworthPlayerController*)Obj)->bForceTouchControls = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AB2_OllyHepworthPlayerController_Statics::NewProp_bForceTouchControls = { "bForceTouchControls", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AB2_OllyHepworthPlayerController), &Z_Construct_UClass_AB2_OllyHepworthPlayerController_Statics::NewProp_bForceTouchControls_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceTouchControls_MetaData), NewProp_bForceTouchControls_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AB2_OllyHepworthPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AB2_OllyHepworthPlayerController_Statics::NewProp_DefaultMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AB2_OllyHepworthPlayerController_Statics::NewProp_DefaultMappingContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AB2_OllyHepworthPlayerController_Statics::NewProp_MobileExcludedMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AB2_OllyHepworthPlayerController_Statics::NewProp_MobileExcludedMappingContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AB2_OllyHepworthPlayerController_Statics::NewProp_MobileControlsWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AB2_OllyHepworthPlayerController_Statics::NewProp_MobileControlsWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AB2_OllyHepworthPlayerController_Statics::NewProp_bForceTouchControls,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AB2_OllyHepworthPlayerController_Statics::PropPointers) < 2048);
// ********** End Class AB2_OllyHepworthPlayerController Property Definitions **********************
UObject* (*const Z_Construct_UClass_AB2_OllyHepworthPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_B2_OllyHepworth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AB2_OllyHepworthPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AB2_OllyHepworthPlayerController_Statics::ClassParams = {
	&AB2_OllyHepworthPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AB2_OllyHepworthPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AB2_OllyHepworthPlayerController_Statics::PropPointers),
	0,
	0x008002A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AB2_OllyHepworthPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AB2_OllyHepworthPlayerController_Statics::Class_MetaDataParams)
};
void AB2_OllyHepworthPlayerController::StaticRegisterNativesAB2_OllyHepworthPlayerController()
{
}
UClass* Z_Construct_UClass_AB2_OllyHepworthPlayerController()
{
	if (!Z_Registration_Info_UClass_AB2_OllyHepworthPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AB2_OllyHepworthPlayerController.OuterSingleton, Z_Construct_UClass_AB2_OllyHepworthPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AB2_OllyHepworthPlayerController.OuterSingleton;
}
AB2_OllyHepworthPlayerController::AB2_OllyHepworthPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AB2_OllyHepworthPlayerController);
AB2_OllyHepworthPlayerController::~AB2_OllyHepworthPlayerController() {}
// ********** End Class AB2_OllyHepworthPlayerController *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_ollyh_source_repos_NewRepo2_B2_OllyHepworth_Source_B2_OllyHepworth_B2_OllyHepworthPlayerController_h__Script_B2_OllyHepworth_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AB2_OllyHepworthPlayerController, AB2_OllyHepworthPlayerController::StaticClass, TEXT("AB2_OllyHepworthPlayerController"), &Z_Registration_Info_UClass_AB2_OllyHepworthPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AB2_OllyHepworthPlayerController), 1863743176U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_ollyh_source_repos_NewRepo2_B2_OllyHepworth_Source_B2_OllyHepworth_B2_OllyHepworthPlayerController_h__Script_B2_OllyHepworth_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ollyh_source_repos_NewRepo2_B2_OllyHepworth_Source_B2_OllyHepworth_B2_OllyHepworthPlayerController_h__Script_B2_OllyHepworth_2135468265{
	TEXT("/Script/B2_OllyHepworth"),
	Z_CompiledInDeferFile_FID_Users_ollyh_source_repos_NewRepo2_B2_OllyHepworth_Source_B2_OllyHepworth_B2_OllyHepworthPlayerController_h__Script_B2_OllyHepworth_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ollyh_source_repos_NewRepo2_B2_OllyHepworth_Source_B2_OllyHepworth_B2_OllyHepworthPlayerController_h__Script_B2_OllyHepworth_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
