// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "B2_OllyHepworthGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeB2_OllyHepworthGameMode() {}

// ********** Begin Cross Module References ********************************************************
B2_OLLYHEPWORTH_API UClass* Z_Construct_UClass_AB2_OllyHepworthGameMode();
B2_OLLYHEPWORTH_API UClass* Z_Construct_UClass_AB2_OllyHepworthGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_B2_OllyHepworth();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AB2_OllyHepworthGameMode *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AB2_OllyHepworthGameMode;
UClass* AB2_OllyHepworthGameMode::GetPrivateStaticClass()
{
	using TClass = AB2_OllyHepworthGameMode;
	if (!Z_Registration_Info_UClass_AB2_OllyHepworthGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("B2_OllyHepworthGameMode"),
			Z_Registration_Info_UClass_AB2_OllyHepworthGameMode.InnerSingleton,
			StaticRegisterNativesAB2_OllyHepworthGameMode,
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
	return Z_Registration_Info_UClass_AB2_OllyHepworthGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AB2_OllyHepworthGameMode_NoRegister()
{
	return AB2_OllyHepworthGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AB2_OllyHepworthGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "B2_OllyHepworthGameMode.h" },
		{ "ModuleRelativePath", "B2_OllyHepworthGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AB2_OllyHepworthGameMode constinit property declarations *****************
// ********** End Class AB2_OllyHepworthGameMode constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AB2_OllyHepworthGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AB2_OllyHepworthGameMode_Statics
UObject* (*const Z_Construct_UClass_AB2_OllyHepworthGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_B2_OllyHepworth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AB2_OllyHepworthGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AB2_OllyHepworthGameMode_Statics::ClassParams = {
	&AB2_OllyHepworthGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AB2_OllyHepworthGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AB2_OllyHepworthGameMode_Statics::Class_MetaDataParams)
};
void AB2_OllyHepworthGameMode::StaticRegisterNativesAB2_OllyHepworthGameMode()
{
}
UClass* Z_Construct_UClass_AB2_OllyHepworthGameMode()
{
	if (!Z_Registration_Info_UClass_AB2_OllyHepworthGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AB2_OllyHepworthGameMode.OuterSingleton, Z_Construct_UClass_AB2_OllyHepworthGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AB2_OllyHepworthGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AB2_OllyHepworthGameMode);
AB2_OllyHepworthGameMode::~AB2_OllyHepworthGameMode() {}
// ********** End Class AB2_OllyHepworthGameMode ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_ollyh_source_repos_NewRepo_B2_OllyHepworth_Source_B2_OllyHepworth_B2_OllyHepworthGameMode_h__Script_B2_OllyHepworth_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AB2_OllyHepworthGameMode, AB2_OllyHepworthGameMode::StaticClass, TEXT("AB2_OllyHepworthGameMode"), &Z_Registration_Info_UClass_AB2_OllyHepworthGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AB2_OllyHepworthGameMode), 4141136003U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_ollyh_source_repos_NewRepo_B2_OllyHepworth_Source_B2_OllyHepworth_B2_OllyHepworthGameMode_h__Script_B2_OllyHepworth_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ollyh_source_repos_NewRepo_B2_OllyHepworth_Source_B2_OllyHepworth_B2_OllyHepworthGameMode_h__Script_B2_OllyHepworth_1572750245{
	TEXT("/Script/B2_OllyHepworth"),
	Z_CompiledInDeferFile_FID_Users_ollyh_source_repos_NewRepo_B2_OllyHepworth_Source_B2_OllyHepworth_B2_OllyHepworthGameMode_h__Script_B2_OllyHepworth_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ollyh_source_repos_NewRepo_B2_OllyHepworth_Source_B2_OllyHepworth_B2_OllyHepworthGameMode_h__Script_B2_OllyHepworth_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
