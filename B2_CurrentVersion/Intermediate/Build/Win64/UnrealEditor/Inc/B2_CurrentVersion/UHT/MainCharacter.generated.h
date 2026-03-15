// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MainCharacter.h"

#ifdef B2_CURRENTVERSION_MainCharacter_generated_h
#error "MainCharacter.generated.h already included, missing '#pragma once' in MainCharacter.h"
#endif
#define B2_CURRENTVERSION_MainCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMainCharacter ***********************************************************
struct Z_Construct_UClass_AMainCharacter_Statics;
B2_CURRENTVERSION_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();

#define FID_Users_ollyh_Documents_GitHub_B2OLLYHEPWORTH_B2_CurrentVersion_Source_B2_CurrentVersion_Public_MainCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend struct ::Z_Construct_UClass_AMainCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend B2_CURRENTVERSION_API UClass* ::Z_Construct_UClass_AMainCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AMainCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/B2_CurrentVersion"), Z_Construct_UClass_AMainCharacter_NoRegister) \
	DECLARE_SERIALIZER(AMainCharacter)


#define FID_Users_ollyh_Documents_GitHub_B2OLLYHEPWORTH_B2_CurrentVersion_Source_B2_CurrentVersion_Public_MainCharacter_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMainCharacter(AMainCharacter&&) = delete; \
	AMainCharacter(const AMainCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainCharacter) \
	NO_API virtual ~AMainCharacter();


#define FID_Users_ollyh_Documents_GitHub_B2OLLYHEPWORTH_B2_CurrentVersion_Source_B2_CurrentVersion_Public_MainCharacter_h_10_PROLOG
#define FID_Users_ollyh_Documents_GitHub_B2OLLYHEPWORTH_B2_CurrentVersion_Source_B2_CurrentVersion_Public_MainCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ollyh_Documents_GitHub_B2OLLYHEPWORTH_B2_CurrentVersion_Source_B2_CurrentVersion_Public_MainCharacter_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_ollyh_Documents_GitHub_B2OLLYHEPWORTH_B2_CurrentVersion_Source_B2_CurrentVersion_Public_MainCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMainCharacter;

// ********** End Class AMainCharacter *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ollyh_Documents_GitHub_B2OLLYHEPWORTH_B2_CurrentVersion_Source_B2_CurrentVersion_Public_MainCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
