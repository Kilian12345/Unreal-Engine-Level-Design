// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SURINA_KnifeProjectile_generated_h
#error "KnifeProjectile.generated.h already included, missing '#pragma once' in KnifeProjectile.h"
#endif
#define SURINA_KnifeProjectile_generated_h

#define SURINA_Source_SURINA_Public_KnifeProjectile_h_12_RPC_WRAPPERS
#define SURINA_Source_SURINA_Public_KnifeProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define SURINA_Source_SURINA_Public_KnifeProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKnifeProjectile(); \
	friend struct Z_Construct_UClass_AKnifeProjectile_Statics; \
public: \
	DECLARE_CLASS(AKnifeProjectile, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SURINA"), NO_API) \
	DECLARE_SERIALIZER(AKnifeProjectile)


#define SURINA_Source_SURINA_Public_KnifeProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAKnifeProjectile(); \
	friend struct Z_Construct_UClass_AKnifeProjectile_Statics; \
public: \
	DECLARE_CLASS(AKnifeProjectile, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SURINA"), NO_API) \
	DECLARE_SERIALIZER(AKnifeProjectile)


#define SURINA_Source_SURINA_Public_KnifeProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKnifeProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKnifeProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKnifeProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKnifeProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKnifeProjectile(AKnifeProjectile&&); \
	NO_API AKnifeProjectile(const AKnifeProjectile&); \
public:


#define SURINA_Source_SURINA_Public_KnifeProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKnifeProjectile(AKnifeProjectile&&); \
	NO_API AKnifeProjectile(const AKnifeProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKnifeProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKnifeProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKnifeProjectile)


#define SURINA_Source_SURINA_Public_KnifeProjectile_h_12_PRIVATE_PROPERTY_OFFSET
#define SURINA_Source_SURINA_Public_KnifeProjectile_h_9_PROLOG
#define SURINA_Source_SURINA_Public_KnifeProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SURINA_Source_SURINA_Public_KnifeProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	SURINA_Source_SURINA_Public_KnifeProjectile_h_12_RPC_WRAPPERS \
	SURINA_Source_SURINA_Public_KnifeProjectile_h_12_INCLASS \
	SURINA_Source_SURINA_Public_KnifeProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SURINA_Source_SURINA_Public_KnifeProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SURINA_Source_SURINA_Public_KnifeProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	SURINA_Source_SURINA_Public_KnifeProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SURINA_Source_SURINA_Public_KnifeProjectile_h_12_INCLASS_NO_PURE_DECLS \
	SURINA_Source_SURINA_Public_KnifeProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURINA_API UClass* StaticClass<class AKnifeProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SURINA_Source_SURINA_Public_KnifeProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
