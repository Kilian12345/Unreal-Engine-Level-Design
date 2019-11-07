// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SURINA/SURINAGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSURINAGameMode() {}
// Cross Module References
	SURINA_API UClass* Z_Construct_UClass_ASURINAGameMode_NoRegister();
	SURINA_API UClass* Z_Construct_UClass_ASURINAGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SURINA();
// End Cross Module References
	void ASURINAGameMode::StaticRegisterNativesASURINAGameMode()
	{
	}
	UClass* Z_Construct_UClass_ASURINAGameMode_NoRegister()
	{
		return ASURINAGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASURINAGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASURINAGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SURINA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASURINAGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SURINAGameMode.h" },
		{ "ModuleRelativePath", "SURINAGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASURINAGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASURINAGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASURINAGameMode_Statics::ClassParams = {
		&ASURINAGameMode::StaticClass,
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
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_ASURINAGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASURINAGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASURINAGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASURINAGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASURINAGameMode, 2011527284);
	template<> SURINA_API UClass* StaticClass<ASURINAGameMode>()
	{
		return ASURINAGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASURINAGameMode(Z_Construct_UClass_ASURINAGameMode, &ASURINAGameMode::StaticClass, TEXT("/Script/SURINA"), TEXT("ASURINAGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASURINAGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
