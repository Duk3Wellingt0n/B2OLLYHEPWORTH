// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MainCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMainCharacter() {}

// ********** Begin Cross Module References ********************************************************
B2_CURRENTVERSION_API UClass* Z_Construct_UClass_AMainCharacter();
B2_CURRENTVERSION_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_B2_CurrentVersion();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMainCharacter ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AMainCharacter;
UClass* AMainCharacter::GetPrivateStaticClass()
{
	using TClass = AMainCharacter;
	if (!Z_Registration_Info_UClass_AMainCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MainCharacter"),
			Z_Registration_Info_UClass_AMainCharacter.InnerSingleton,
			StaticRegisterNativesAMainCharacter,
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
	return Z_Registration_Info_UClass_AMainCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AMainCharacter_NoRegister()
{
	return AMainCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMainCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MainCharacter.h" },
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AMainCharacter constinit property declarations ***************************
// ********** End Class AMainCharacter constinit property declarations *****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AMainCharacter_Statics
UObject* (*const Z_Construct_UClass_AMainCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_B2_CurrentVersion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainCharacter_Statics::ClassParams = {
	&AMainCharacter::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainCharacter_Statics::Class_MetaDataParams)
};
void AMainCharacter::StaticRegisterNativesAMainCharacter()
{
}
UClass* Z_Construct_UClass_AMainCharacter()
{
	if (!Z_Registration_Info_UClass_AMainCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainCharacter.OuterSingleton, Z_Construct_UClass_AMainCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AMainCharacter);
AMainCharacter::~AMainCharacter() {}
// ********** End Class AMainCharacter *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_ollyh_Documents_GitHub_B2OLLYHEPWORTH_B2_CurrentVersion_Source_B2_CurrentVersion_Public_MainCharacter_h__Script_B2_CurrentVersion_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainCharacter, AMainCharacter::StaticClass, TEXT("AMainCharacter"), &Z_Registration_Info_UClass_AMainCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainCharacter), 2308313444U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_ollyh_Documents_GitHub_B2OLLYHEPWORTH_B2_CurrentVersion_Source_B2_CurrentVersion_Public_MainCharacter_h__Script_B2_CurrentVersion_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ollyh_Documents_GitHub_B2OLLYHEPWORTH_B2_CurrentVersion_Source_B2_CurrentVersion_Public_MainCharacter_h__Script_B2_CurrentVersion_3533061589{
	TEXT("/Script/B2_CurrentVersion"),
	Z_CompiledInDeferFile_FID_Users_ollyh_Documents_GitHub_B2OLLYHEPWORTH_B2_CurrentVersion_Source_B2_CurrentVersion_Public_MainCharacter_h__Script_B2_CurrentVersion_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ollyh_Documents_GitHub_B2OLLYHEPWORTH_B2_CurrentVersion_Source_B2_CurrentVersion_Public_MainCharacter_h__Script_B2_CurrentVersion_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
