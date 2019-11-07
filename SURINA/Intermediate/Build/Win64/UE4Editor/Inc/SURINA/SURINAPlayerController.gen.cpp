// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SURINA/SURINAPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSURINAPlayerController() {}
// Cross Module References
	SURINA_API UClass* Z_Construct_UClass_ASURINAPlayerController_NoRegister();
	SURINA_API UClass* Z_Construct_UClass_ASURINAPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_SURINA();
// End Cross Module References
	void ASURINAPlayerController::StaticRegisterNativesASURINAPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ASURINAPlayerController_NoRegister()
	{
		return ASURINAPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ASURINAPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASURINAPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_SURINA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASURINAPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SURINAPlayerController.h" },
		{ "ModuleRelativePath", "SURINAPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASURINAPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASURINAPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASURINAPlayerController_Statics::ClassParams = {
		&ASURINAPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASURINAPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASURINAPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASURINAPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASURINAPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASURINAPlayerController, 452177254);
	template<> SURINA_API UClass* StaticClass<ASURINAPlayerController>()
	{
		return ASURINAPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASURINAPlayerController(Z_Construct_UClass_ASURINAPlayerController, &ASURINAPlayerController::StaticClass, TEXT("/Script/SURINA"), TEXT("ASURINAPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASURINAPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
