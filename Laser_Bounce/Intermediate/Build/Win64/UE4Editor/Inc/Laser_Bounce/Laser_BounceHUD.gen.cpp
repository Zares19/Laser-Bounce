// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Laser_Bounce/Laser_BounceHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaser_BounceHUD() {}
// Cross Module References
	LASER_BOUNCE_API UClass* Z_Construct_UClass_ALaser_BounceHUD_NoRegister();
	LASER_BOUNCE_API UClass* Z_Construct_UClass_ALaser_BounceHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Laser_Bounce();
// End Cross Module References
	void ALaser_BounceHUD::StaticRegisterNativesALaser_BounceHUD()
	{
	}
	UClass* Z_Construct_UClass_ALaser_BounceHUD_NoRegister()
	{
		return ALaser_BounceHUD::StaticClass();
	}
	struct Z_Construct_UClass_ALaser_BounceHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALaser_BounceHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Laser_Bounce,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALaser_BounceHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Laser_BounceHUD.h" },
		{ "ModuleRelativePath", "Laser_BounceHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALaser_BounceHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALaser_BounceHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALaser_BounceHUD_Statics::ClassParams = {
		&ALaser_BounceHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALaser_BounceHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALaser_BounceHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALaser_BounceHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALaser_BounceHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALaser_BounceHUD, 3544189452);
	template<> LASER_BOUNCE_API UClass* StaticClass<ALaser_BounceHUD>()
	{
		return ALaser_BounceHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALaser_BounceHUD(Z_Construct_UClass_ALaser_BounceHUD, &ALaser_BounceHUD::StaticClass, TEXT("/Script/Laser_Bounce"), TEXT("ALaser_BounceHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALaser_BounceHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
