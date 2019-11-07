// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SURINA_SURINACharacter_generated_h
#error "SURINACharacter.generated.h already included, missing '#pragma once' in SURINACharacter.h"
#endif
#define SURINA_SURINACharacter_generated_h

#define SURINA_Source_SURINA_SURINACharacter_h_12_RPC_WRAPPERS
#define SURINA_Source_SURINA_SURINACharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define SURINA_Source_SURINA_SURINACharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASURINACharacter(); \
	friend struct Z_Construct_UClass_ASURINACharacter_Statics; \
public: \
	DECLARE_CLASS(ASURINACharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SURINA"), NO_API) \
	DECLARE_SERIALIZER(ASURINACharacter)


#define SURINA_Source_SURINA_SURINACharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASURINACharacter(); \
	friend struct Z_Construct_UClass_ASURINACharacter_Statics; \
public: \
	DECLARE_CLASS(ASURINACharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SURINA"), NO_API) \
	DECLARE_SERIALIZER(ASURINACharacter)


#define SURINA_Source_SURINA_SURINACharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASURINACharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASURINACharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASURINACharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASURINACharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASURINACharacter(ASURINACharacter&&); \
	NO_API ASURINACharacter(const ASURINACharacter&); \
public:


#define SURINA_Source_SURINA_SURINACharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASURINACharacter(ASURINACharacter&&); \
	NO_API ASURINACharacter(const ASURINACharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASURINACharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASURINACharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASURINACharacter)


#define SURINA_Source_SURINA_SURINACharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(ASURINACharacter, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ASURINACharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__CursorToWorld() { return STRUCT_OFFSET(ASURINACharacter, CursorToWorld); }


#define SURINA_Source_SURINA_SURINACharacter_h_9_PROLOG
#define SURINA_Source_SURINA_SURINACharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SURINA_Source_SURINA_SURINACharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	SURINA_Source_SURINA_SURINACharacter_h_12_RPC_WRAPPERS \
	SURINA_Source_SURINA_SURINACharacter_h_12_INCLASS \
	SURINA_Source_SURINA_SURINACharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SURINA_Source_SURINA_SURINACharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SURINA_Source_SURINA_SURINACharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	SURINA_Source_SURINA_SURINACharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SURINA_Source_SURINA_SURINACharacter_h_12_INCLASS_NO_PURE_DECLS \
	SURINA_Source_SURINA_SURINACharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURINA_API UClass* StaticClass<class ASURINACharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SURINA_Source_SURINA_SURINACharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
