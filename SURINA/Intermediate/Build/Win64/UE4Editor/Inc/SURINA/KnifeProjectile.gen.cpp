// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SURINA/Public/KnifeProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKnifeProjectile() {}
// Cross Module References
	SURINA_API UClass* Z_Construct_UClass_AKnifeProjectile_NoRegister();
	SURINA_API UClass* Z_Construct_UClass_AKnifeProjectile();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_SURINA();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void AKnifeProjectile::StaticRegisterNativesAKnifeProjectile()
	{
	}
	UClass* Z_Construct_UClass_AKnifeProjectile_NoRegister()
	{
		return AKnifeProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AKnifeProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovementComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKnifeProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_SURINA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKnifeProjectile_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "KnifeProjectile.h" },
		{ "ModuleRelativePath", "Public/KnifeProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKnifeProjectile_Statics::NewProp_ProjectileMovementComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "// Projectile movement component.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KnifeProjectile.h" },
		{ "ToolTip", "Projectile movement component." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKnifeProjectile_Statics::NewProp_ProjectileMovementComp = { "ProjectileMovementComp", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKnifeProjectile, ProjectileMovementComp), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKnifeProjectile_Statics::NewProp_ProjectileMovementComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AKnifeProjectile_Statics::NewProp_ProjectileMovementComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKnifeProjectile_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KnifeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKnifeProjectile_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKnifeProjectile, CollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKnifeProjectile_Statics::NewProp_CollisionComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AKnifeProjectile_Statics::NewProp_CollisionComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKnifeProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKnifeProjectile_Statics::NewProp_ProjectileMovementComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKnifeProjectile_Statics::NewProp_CollisionComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKnifeProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKnifeProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKnifeProjectile_Statics::ClassParams = {
		&AKnifeProjectile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AKnifeProjectile_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AKnifeProjectile_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AKnifeProjectile_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AKnifeProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKnifeProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKnifeProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKnifeProjectile, 248913801);
	template<> SURINA_API UClass* StaticClass<AKnifeProjectile>()
	{
		return AKnifeProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKnifeProjectile(Z_Construct_UClass_AKnifeProjectile, &AKnifeProjectile::StaticClass, TEXT("/Script/SURINA"), TEXT("AKnifeProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKnifeProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
