// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameJam_052021/GameJam_052021GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameJam_052021GameMode() {}
// Cross Module References
	GAMEJAM_052021_API UClass* Z_Construct_UClass_AGameJam_052021GameMode_NoRegister();
	GAMEJAM_052021_API UClass* Z_Construct_UClass_AGameJam_052021GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GameJam_052021();
// End Cross Module References
	void AGameJam_052021GameMode::StaticRegisterNativesAGameJam_052021GameMode()
	{
	}
	UClass* Z_Construct_UClass_AGameJam_052021GameMode_NoRegister()
	{
		return AGameJam_052021GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGameJam_052021GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameJam_052021GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GameJam_052021,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameJam_052021GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameJam_052021GameMode.h" },
		{ "ModuleRelativePath", "GameJam_052021GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameJam_052021GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameJam_052021GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameJam_052021GameMode_Statics::ClassParams = {
		&AGameJam_052021GameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGameJam_052021GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameJam_052021GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameJam_052021GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameJam_052021GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameJam_052021GameMode, 825761669);
	template<> GAMEJAM_052021_API UClass* StaticClass<AGameJam_052021GameMode>()
	{
		return AGameJam_052021GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameJam_052021GameMode(Z_Construct_UClass_AGameJam_052021GameMode, &AGameJam_052021GameMode::StaticClass, TEXT("/Script/GameJam_052021"), TEXT("AGameJam_052021GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameJam_052021GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
