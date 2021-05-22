// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef GAMEJAM_052021_GameJam_052021Projectile_generated_h
#error "GameJam_052021Projectile.generated.h already included, missing '#pragma once' in GameJam_052021Projectile.h"
#endif
#define GAMEJAM_052021_GameJam_052021Projectile_generated_h

#define GameJam_052021_Source_GameJam_052021_GameJam_052021Projectile_h_15_SPARSE_DATA
#define GameJam_052021_Source_GameJam_052021_GameJam_052021Projectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define GameJam_052021_Source_GameJam_052021_GameJam_052021Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define GameJam_052021_Source_GameJam_052021_GameJam_052021Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameJam_052021Projectile(); \
	friend struct Z_Construct_UClass_AGameJam_052021Projectile_Statics; \
public: \
	DECLARE_CLASS(AGameJam_052021Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameJam_052021"), NO_API) \
	DECLARE_SERIALIZER(AGameJam_052021Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define GameJam_052021_Source_GameJam_052021_GameJam_052021Projectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGameJam_052021Projectile(); \
	friend struct Z_Construct_UClass_AGameJam_052021Projectile_Statics; \
public: \
	DECLARE_CLASS(AGameJam_052021Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameJam_052021"), NO_API) \
	DECLARE_SERIALIZER(AGameJam_052021Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define GameJam_052021_Source_GameJam_052021_GameJam_052021Projectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameJam_052021Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameJam_052021Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameJam_052021Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameJam_052021Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameJam_052021Projectile(AGameJam_052021Projectile&&); \
	NO_API AGameJam_052021Projectile(const AGameJam_052021Projectile&); \
public:


#define GameJam_052021_Source_GameJam_052021_GameJam_052021Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameJam_052021Projectile(AGameJam_052021Projectile&&); \
	NO_API AGameJam_052021Projectile(const AGameJam_052021Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameJam_052021Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameJam_052021Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameJam_052021Projectile)


#define GameJam_052021_Source_GameJam_052021_GameJam_052021Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AGameJam_052021Projectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AGameJam_052021Projectile, ProjectileMovement); }


#define GameJam_052021_Source_GameJam_052021_GameJam_052021Projectile_h_12_PROLOG
#define GameJam_052021_Source_GameJam_052021_GameJam_052021Projectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameJam_052021_Source_GameJam_052021_GameJam_052021Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	GameJam_052021_Source_GameJam_052021_GameJam_052021Projectile_h_15_SPARSE_DATA \
	GameJam_052021_Source_GameJam_052021_GameJam_052021Projectile_h_15_RPC_WRAPPERS \
	GameJam_052021_Source_GameJam_052021_GameJam_052021Projectile_h_15_INCLASS \
	GameJam_052021_Source_GameJam_052021_GameJam_052021Projectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GameJam_052021_Source_GameJam_052021_GameJam_052021Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameJam_052021_Source_GameJam_052021_GameJam_052021Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	GameJam_052021_Source_GameJam_052021_GameJam_052021Projectile_h_15_SPARSE_DATA \
	GameJam_052021_Source_GameJam_052021_GameJam_052021Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GameJam_052021_Source_GameJam_052021_GameJam_052021Projectile_h_15_INCLASS_NO_PURE_DECLS \
	GameJam_052021_Source_GameJam_052021_GameJam_052021Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEJAM_052021_API UClass* StaticClass<class AGameJam_052021Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GameJam_052021_Source_GameJam_052021_GameJam_052021Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
