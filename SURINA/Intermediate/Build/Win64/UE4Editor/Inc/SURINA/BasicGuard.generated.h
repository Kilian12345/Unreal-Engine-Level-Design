// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SURINA_BasicGuard_generated_h
#error "BasicGuard.generated.h already included, missing '#pragma once' in BasicGuard.h"
#endif
#define SURINA_BasicGuard_generated_h

#define SURINA_Source_SURINA_Public_BasicGuard_h_12_RPC_WRAPPERS
#define SURINA_Source_SURINA_Public_BasicGuard_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define SURINA_Source_SURINA_Public_BasicGuard_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasicGuard(); \
	friend struct Z_Construct_UClass_ABasicGuard_Statics; \
public: \
	DECLARE_CLASS(ABasicGuard, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SURINA"), NO_API) \
	DECLARE_SERIALIZER(ABasicGuard)


#define SURINA_Source_SURINA_Public_BasicGuard_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABasicGuard(); \
	friend struct Z_Construct_UClass_ABasicGuard_Statics; \
public: \
	DECLARE_CLASS(ABasicGuard, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SURINA"), NO_API) \
	DECLARE_SERIALIZER(ABasicGuard)


#define SURINA_Source_SURINA_Public_BasicGuard_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasicGuard(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasicGuard) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicGuard); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicGuard); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasicGuard(ABasicGuard&&); \
	NO_API ABasicGuard(const ABasicGuard&); \
public:


#define SURINA_Source_SURINA_Public_BasicGuard_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasicGuard(ABasicGuard&&); \
	NO_API ABasicGuard(const ABasicGuard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicGuard); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicGuard); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasicGuard)


#define SURINA_Source_SURINA_Public_BasicGuard_h_12_PRIVATE_PROPERTY_OFFSET
#define SURINA_Source_SURINA_Public_BasicGuard_h_9_PROLOG
#define SURINA_Source_SURINA_Public_BasicGuard_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SURINA_Source_SURINA_Public_BasicGuard_h_12_PRIVATE_PROPERTY_OFFSET \
	SURINA_Source_SURINA_Public_BasicGuard_h_12_RPC_WRAPPERS \
	SURINA_Source_SURINA_Public_BasicGuard_h_12_INCLASS \
	SURINA_Source_SURINA_Public_BasicGuard_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SURINA_Source_SURINA_Public_BasicGuard_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SURINA_Source_SURINA_Public_BasicGuard_h_12_PRIVATE_PROPERTY_OFFSET \
	SURINA_Source_SURINA_Public_BasicGuard_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SURINA_Source_SURINA_Public_BasicGuard_h_12_INCLASS_NO_PURE_DECLS \
	SURINA_Source_SURINA_Public_BasicGuard_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURINA_API UClass* StaticClass<class ABasicGuard>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SURINA_Source_SURINA_Public_BasicGuard_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
