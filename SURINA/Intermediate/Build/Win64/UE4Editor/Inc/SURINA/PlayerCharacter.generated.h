// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SURINA_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define SURINA_PlayerCharacter_generated_h

#define SURINA_Source_SURINA_Public_PlayerCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetDash) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetDash(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopDash) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopDash(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDash) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Dash(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	}


#define SURINA_Source_SURINA_Public_PlayerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetDash) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetDash(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopDash) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopDash(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDash) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Dash(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	}


#define SURINA_Source_SURINA_Public_PlayerCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SURINA"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define SURINA_Source_SURINA_Public_PlayerCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SURINA"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define SURINA_Source_SURINA_Public_PlayerCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public:


#define SURINA_Source_SURINA_Public_PlayerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter)


#define SURINA_Source_SURINA_Public_PlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CursorToWorld() { return STRUCT_OFFSET(APlayerCharacter, CursorToWorld); } \
	FORCEINLINE static uint32 __PPO__LaunchSpeed() { return STRUCT_OFFSET(APlayerCharacter, LaunchSpeed); }


#define SURINA_Source_SURINA_Public_PlayerCharacter_h_9_PROLOG
#define SURINA_Source_SURINA_Public_PlayerCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SURINA_Source_SURINA_Public_PlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	SURINA_Source_SURINA_Public_PlayerCharacter_h_12_RPC_WRAPPERS \
	SURINA_Source_SURINA_Public_PlayerCharacter_h_12_INCLASS \
	SURINA_Source_SURINA_Public_PlayerCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SURINA_Source_SURINA_Public_PlayerCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SURINA_Source_SURINA_Public_PlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	SURINA_Source_SURINA_Public_PlayerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SURINA_Source_SURINA_Public_PlayerCharacter_h_12_INCLASS_NO_PURE_DECLS \
	SURINA_Source_SURINA_Public_PlayerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURINA_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SURINA_Source_SURINA_Public_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
