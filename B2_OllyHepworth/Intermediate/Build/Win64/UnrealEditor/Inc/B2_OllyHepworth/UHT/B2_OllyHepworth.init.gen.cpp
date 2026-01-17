// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeB2_OllyHepworth_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	B2_OLLYHEPWORTH_API UFunction* Z_Construct_UDelegateFunction_B2_OllyHepworth_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_B2_OllyHepworth;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_B2_OllyHepworth()
	{
		if (!Z_Registration_Info_UPackage__Script_B2_OllyHepworth.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_B2_OllyHepworth_OnEnemyDied__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/B2_OllyHepworth",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x14882B7F,
			0x7B6C2939,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_B2_OllyHepworth.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_B2_OllyHepworth.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_B2_OllyHepworth(Z_Construct_UPackage__Script_B2_OllyHepworth, TEXT("/Script/B2_OllyHepworth"), Z_Registration_Info_UPackage__Script_B2_OllyHepworth, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x14882B7F, 0x7B6C2939));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
