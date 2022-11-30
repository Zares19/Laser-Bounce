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
#ifdef LASER_BOUNCE_Laser_BounceProjectile_generated_h
#error "Laser_BounceProjectile.generated.h already included, missing '#pragma once' in Laser_BounceProjectile.h"
#endif
#define LASER_BOUNCE_Laser_BounceProjectile_generated_h

#define Laser_Bounce_Source_Laser_Bounce_Laser_BounceProjectile_h_15_SPARSE_DATA
#define Laser_Bounce_Source_Laser_Bounce_Laser_BounceProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Laser_Bounce_Source_Laser_Bounce_Laser_BounceProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Laser_Bounce_Source_Laser_Bounce_Laser_BounceProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALaser_BounceProjectile(); \
	friend struct Z_Construct_UClass_ALaser_BounceProjectile_Statics; \
public: \
	DECLARE_CLASS(ALaser_BounceProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Laser_Bounce"), NO_API) \
	DECLARE_SERIALIZER(ALaser_BounceProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Laser_Bounce_Source_Laser_Bounce_Laser_BounceProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesALaser_BounceProjectile(); \
	friend struct Z_Construct_UClass_ALaser_BounceProjectile_Statics; \
public: \
	DECLARE_CLASS(ALaser_BounceProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Laser_Bounce"), NO_API) \
	DECLARE_SERIALIZER(ALaser_BounceProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Laser_Bounce_Source_Laser_Bounce_Laser_BounceProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALaser_BounceProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALaser_BounceProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALaser_BounceProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALaser_BounceProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALaser_BounceProjectile(ALaser_BounceProjectile&&); \
	NO_API ALaser_BounceProjectile(const ALaser_BounceProjectile&); \
public:


#define Laser_Bounce_Source_Laser_Bounce_Laser_BounceProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALaser_BounceProjectile(ALaser_BounceProjectile&&); \
	NO_API ALaser_BounceProjectile(const ALaser_BounceProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALaser_BounceProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALaser_BounceProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALaser_BounceProjectile)


#define Laser_Bounce_Source_Laser_Bounce_Laser_BounceProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ALaser_BounceProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ALaser_BounceProjectile, ProjectileMovement); }


#define Laser_Bounce_Source_Laser_Bounce_Laser_BounceProjectile_h_12_PROLOG
#define Laser_Bounce_Source_Laser_Bounce_Laser_BounceProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Laser_Bounce_Source_Laser_Bounce_Laser_BounceProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Laser_Bounce_Source_Laser_Bounce_Laser_BounceProjectile_h_15_SPARSE_DATA \
	Laser_Bounce_Source_Laser_Bounce_Laser_BounceProjectile_h_15_RPC_WRAPPERS \
	Laser_Bounce_Source_Laser_Bounce_Laser_BounceProjectile_h_15_INCLASS \
	Laser_Bounce_Source_Laser_Bounce_Laser_BounceProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Laser_Bounce_Source_Laser_Bounce_Laser_BounceProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Laser_Bounce_Source_Laser_Bounce_Laser_BounceProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Laser_Bounce_Source_Laser_Bounce_Laser_BounceProjectile_h_15_SPARSE_DATA \
	Laser_Bounce_Source_Laser_Bounce_Laser_BounceProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Laser_Bounce_Source_Laser_Bounce_Laser_BounceProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Laser_Bounce_Source_Laser_Bounce_Laser_BounceProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LASER_BOUNCE_API UClass* StaticClass<class ALaser_BounceProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Laser_Bounce_Source_Laser_Bounce_Laser_BounceProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
