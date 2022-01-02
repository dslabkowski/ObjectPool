// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FTransform;
class APawn;
#ifdef UEOBJECTPOOLING_ObjectPool_generated_h
#error "ObjectPool.generated.h already included, missing '#pragma once' in ObjectPool.h"
#endif
#define UEOBJECTPOOLING_ObjectPool_generated_h

#define MyProject_Plugins_UEObjectPooling_Source_Public_ObjectPool_h_22_DELEGATE \
struct _Script_UEObjectPooling_eventActorReturnedToPool_Parms \
{ \
	AActor* ReturnedActor; \
}; \
static inline void FActorReturnedToPool_DelegateWrapper(const FMulticastScriptDelegate& ActorReturnedToPool, AActor* ReturnedActor) \
{ \
	_Script_UEObjectPooling_eventActorReturnedToPool_Parms Parms; \
	Parms.ReturnedActor=ReturnedActor; \
	ActorReturnedToPool.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_UEObjectPooling_Source_Public_ObjectPool_h_21_DELEGATE \
struct _Script_UEObjectPooling_eventActorSpawnedFromPool_Parms \
{ \
	AActor* SpawnedActor; \
}; \
static inline void FActorSpawnedFromPool_DelegateWrapper(const FMulticastScriptDelegate& ActorSpawnedFromPool, AActor* SpawnedActor) \
{ \
	_Script_UEObjectPooling_eventActorSpawnedFromPool_Parms Parms; \
	Parms.SpawnedActor=SpawnedActor; \
	ActorSpawnedFromPool.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_UEObjectPooling_Source_Public_ObjectPool_h_27_SPARSE_DATA
#define MyProject_Plugins_UEObjectPooling_Source_Public_ObjectPool_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsActorInUse); \
	DECLARE_FUNCTION(execEmptyPool); \
	DECLARE_FUNCTION(execGetPoolSize); \
	DECLARE_FUNCTION(execGetInactiveActorsFromPool); \
	DECLARE_FUNCTION(execGetActiveActorsFromPool); \
	DECLARE_FUNCTION(execReturnActorToPool); \
	DECLARE_FUNCTION(execHasPoolFreeActor); \
	DECLARE_FUNCTION(execSpawnActorFromPool); \
	DECLARE_FUNCTION(execSimpleAddActorsToPool); \
	DECLARE_FUNCTION(execAddActorsToPool);


#define MyProject_Plugins_UEObjectPooling_Source_Public_ObjectPool_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsActorInUse); \
	DECLARE_FUNCTION(execEmptyPool); \
	DECLARE_FUNCTION(execGetPoolSize); \
	DECLARE_FUNCTION(execGetInactiveActorsFromPool); \
	DECLARE_FUNCTION(execGetActiveActorsFromPool); \
	DECLARE_FUNCTION(execReturnActorToPool); \
	DECLARE_FUNCTION(execHasPoolFreeActor); \
	DECLARE_FUNCTION(execSpawnActorFromPool); \
	DECLARE_FUNCTION(execSimpleAddActorsToPool); \
	DECLARE_FUNCTION(execAddActorsToPool);


#define MyProject_Plugins_UEObjectPooling_Source_Public_ObjectPool_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectPool(); \
	friend struct Z_Construct_UClass_UObjectPool_Statics; \
public: \
	DECLARE_CLASS(UObjectPool, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UEObjectPooling"), NO_API) \
	DECLARE_SERIALIZER(UObjectPool)


#define MyProject_Plugins_UEObjectPooling_Source_Public_ObjectPool_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUObjectPool(); \
	friend struct Z_Construct_UClass_UObjectPool_Statics; \
public: \
	DECLARE_CLASS(UObjectPool, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UEObjectPooling"), NO_API) \
	DECLARE_SERIALIZER(UObjectPool)


#define MyProject_Plugins_UEObjectPooling_Source_Public_ObjectPool_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjectPool(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectPool) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectPool); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectPool); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObjectPool(UObjectPool&&); \
	NO_API UObjectPool(const UObjectPool&); \
public:


#define MyProject_Plugins_UEObjectPooling_Source_Public_ObjectPool_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObjectPool(UObjectPool&&); \
	NO_API UObjectPool(const UObjectPool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectPool); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectPool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UObjectPool)


#define MyProject_Plugins_UEObjectPooling_Source_Public_ObjectPool_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ActiveActors() { return STRUCT_OFFSET(UObjectPool, ActiveActors); } \
	FORCEINLINE static uint32 __PPO__InactiveActors() { return STRUCT_OFFSET(UObjectPool, InactiveActors); }


#define MyProject_Plugins_UEObjectPooling_Source_Public_ObjectPool_h_24_PROLOG
#define MyProject_Plugins_UEObjectPooling_Source_Public_ObjectPool_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_UEObjectPooling_Source_Public_ObjectPool_h_27_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_UEObjectPooling_Source_Public_ObjectPool_h_27_SPARSE_DATA \
	MyProject_Plugins_UEObjectPooling_Source_Public_ObjectPool_h_27_RPC_WRAPPERS \
	MyProject_Plugins_UEObjectPooling_Source_Public_ObjectPool_h_27_INCLASS \
	MyProject_Plugins_UEObjectPooling_Source_Public_ObjectPool_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_UEObjectPooling_Source_Public_ObjectPool_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_UEObjectPooling_Source_Public_ObjectPool_h_27_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_UEObjectPooling_Source_Public_ObjectPool_h_27_SPARSE_DATA \
	MyProject_Plugins_UEObjectPooling_Source_Public_ObjectPool_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_UEObjectPooling_Source_Public_ObjectPool_h_27_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_UEObjectPooling_Source_Public_ObjectPool_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UEOBJECTPOOLING_API UClass* StaticClass<class UObjectPool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_UEObjectPooling_Source_Public_ObjectPool_h


#define FOREACH_ENUM_EOUTPUTSTATES(op) \
	op(Success) \
	op(Failed) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
