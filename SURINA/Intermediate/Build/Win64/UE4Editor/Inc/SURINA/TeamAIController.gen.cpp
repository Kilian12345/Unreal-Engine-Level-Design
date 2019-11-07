// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SURINA/Public/TeamAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeamAIController() {}
// Cross Module References
	SURINA_API UClass* Z_Construct_UClass_ATeamAIController_NoRegister();
	SURINA_API UClass* Z_Construct_UClass_ATeamAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_SURINA();
// End Cross Module References
	void ATeamAIController::StaticRegisterNativesATeamAIController()
	{
	}
	UClass* Z_Construct_UClass_ATeamAIController_NoRegister()
	{
		return ATeamAIController::StaticClass();
	}
	struct Z_Construct_UClass_ATeamAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATeamAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_SURINA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeamAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TeamAIController.h" },
		{ "ModuleRelativePath", "Public/TeamAIController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATeamAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeamAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATeamAIController_Statics::ClassParams = {
		&ATeamAIController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_ATeamAIController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATeamAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATeamAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATeamAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATeamAIController, 3775585531);
	template<> SURINA_API UClass* StaticClass<ATeamAIController>()
	{
		return ATeamAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATeamAIController(Z_Construct_UClass_ATeamAIController, &ATeamAIController::StaticClass, TEXT("/Script/SURINA"), TEXT("ATeamAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATeamAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
