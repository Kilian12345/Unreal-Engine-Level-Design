// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SURINA_TeamAIController_generated_h
#error "TeamAIController.generated.h already included, missing '#pragma once' in TeamAIController.h"
#endif
#define SURINA_TeamAIController_generated_h

#define SURINA_Source_SURINA_Public_TeamAIController_h_16_RPC_WRAPPERS
#define SURINA_Source_SURINA_Public_TeamAIController_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define SURINA_Source_SURINA_Public_TeamAIController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATeamAIController(); \
	friend struct Z_Construct_UClass_ATeamAIController_Statics; \
public: \
	DECLARE_CLASS(ATeamAIController, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SURINA"), NO_API) \
	DECLARE_SERIALIZER(ATeamAIController)


#define SURINA_Source_SURINA_Public_TeamAIController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesATeamAIController(); \
	friend struct Z_Construct_UClass_ATeamAIController_Statics; \
public: \
	DECLARE_CLASS(ATeamAIController, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SURINA"), NO_API) \
	DECLARE_SERIALIZER(ATeamAIController)


#define SURINA_Source_SURINA_Public_TeamAIController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATeamAIController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATeamAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATeamAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATeamAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATeamAIController(ATeamAIController&&); \
	NO_API ATeamAIController(const ATeamAIController&); \
public:


#define SURINA_Source_SURINA_Public_TeamAIController_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATeamAIController(ATeamAIController&&); \
	NO_API ATeamAIController(const ATeamAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATeamAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATeamAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATeamAIController)


#define SURINA_Source_SURINA_Public_TeamAIController_h_16_PRIVATE_PROPERTY_OFFSET
#define SURINA_Source_SURINA_Public_TeamAIController_h_13_PROLOG
#define SURINA_Source_SURINA_Public_TeamAIController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SURINA_Source_SURINA_Public_TeamAIController_h_16_PRIVATE_PROPERTY_OFFSET \
	SURINA_Source_SURINA_Public_TeamAIController_h_16_RPC_WRAPPERS \
	SURINA_Source_SURINA_Public_TeamAIController_h_16_INCLASS \
	SURINA_Source_SURINA_Public_TeamAIController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SURINA_Source_SURINA_Public_TeamAIController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SURINA_Source_SURINA_Public_TeamAIController_h_16_PRIVATE_PROPERTY_OFFSET \
	SURINA_Source_SURINA_Public_TeamAIController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SURINA_Source_SURINA_Public_TeamAIController_h_16_INCLASS_NO_PURE_DECLS \
	SURINA_Source_SURINA_Public_TeamAIController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURINA_API UClass* StaticClass<class ATeamAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SURINA_Source_SURINA_Public_TeamAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
