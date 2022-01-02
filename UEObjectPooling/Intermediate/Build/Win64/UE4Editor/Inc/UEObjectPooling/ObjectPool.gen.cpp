// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Public/ObjectPool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectPool() {}
// Cross Module References
	UEOBJECTPOOLING_API UFunction* Z_Construct_UDelegateFunction_UEObjectPooling_ActorReturnedToPool__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UEObjectPooling();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UEOBJECTPOOLING_API UFunction* Z_Construct_UDelegateFunction_UEObjectPooling_ActorSpawnedFromPool__DelegateSignature();
	UEOBJECTPOOLING_API UEnum* Z_Construct_UEnum_UEObjectPooling_EOutputStates();
	UEOBJECTPOOLING_API UClass* Z_Construct_UClass_UObjectPool_NoRegister();
	UEOBJECTPOOLING_API UClass* Z_Construct_UClass_UObjectPool();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UEObjectPooling_ActorReturnedToPool__DelegateSignature_Statics
	{
		struct _Script_UEObjectPooling_eventActorReturnedToPool_Parms
		{
			AActor* ReturnedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UEObjectPooling_ActorReturnedToPool__DelegateSignature_Statics::NewProp_ReturnedActor = { "ReturnedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UEObjectPooling_eventActorReturnedToPool_Parms, ReturnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UEObjectPooling_ActorReturnedToPool__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEObjectPooling_ActorReturnedToPool__DelegateSignature_Statics::NewProp_ReturnedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEObjectPooling_ActorReturnedToPool__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectPool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEObjectPooling_ActorReturnedToPool__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UEObjectPooling, nullptr, "ActorReturnedToPool__DelegateSignature", nullptr, nullptr, sizeof(_Script_UEObjectPooling_eventActorReturnedToPool_Parms), Z_Construct_UDelegateFunction_UEObjectPooling_ActorReturnedToPool__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEObjectPooling_ActorReturnedToPool__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UEObjectPooling_ActorReturnedToPool__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEObjectPooling_ActorReturnedToPool__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UEObjectPooling_ActorReturnedToPool__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UEObjectPooling_ActorReturnedToPool__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UEObjectPooling_ActorSpawnedFromPool__DelegateSignature_Statics
	{
		struct _Script_UEObjectPooling_eventActorSpawnedFromPool_Parms
		{
			AActor* SpawnedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UEObjectPooling_ActorSpawnedFromPool__DelegateSignature_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UEObjectPooling_eventActorSpawnedFromPool_Parms, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UEObjectPooling_ActorSpawnedFromPool__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEObjectPooling_ActorSpawnedFromPool__DelegateSignature_Statics::NewProp_SpawnedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEObjectPooling_ActorSpawnedFromPool__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectPool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEObjectPooling_ActorSpawnedFromPool__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UEObjectPooling, nullptr, "ActorSpawnedFromPool__DelegateSignature", nullptr, nullptr, sizeof(_Script_UEObjectPooling_eventActorSpawnedFromPool_Parms), Z_Construct_UDelegateFunction_UEObjectPooling_ActorSpawnedFromPool__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEObjectPooling_ActorSpawnedFromPool__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UEObjectPooling_ActorSpawnedFromPool__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEObjectPooling_ActorSpawnedFromPool__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UEObjectPooling_ActorSpawnedFromPool__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UEObjectPooling_ActorSpawnedFromPool__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EOutputStates_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UEObjectPooling_EOutputStates, Z_Construct_UPackage__Script_UEObjectPooling(), TEXT("EOutputStates"));
		}
		return Singleton;
	}
	template<> UEOBJECTPOOLING_API UEnum* StaticEnum<EOutputStates>()
	{
		return EOutputStates_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOutputStates(EOutputStates_StaticEnum, TEXT("/Script/UEObjectPooling"), TEXT("EOutputStates"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UEObjectPooling_EOutputStates_Hash() { return 1160254118U; }
	UEnum* Z_Construct_UEnum_UEObjectPooling_EOutputStates()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UEObjectPooling();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOutputStates"), 0, Get_Z_Construct_UEnum_UEObjectPooling_EOutputStates_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Success", (int64)Success },
				{ "Failed", (int64)Failed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Failed.DisplayName", "Failed" },
				{ "Failed.Name", "Failed" },
				{ "ModuleRelativePath", "Public/ObjectPool.h" },
				{ "Success.DisplayName", "Success" },
				{ "Success.Name", "Success" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UEObjectPooling,
				nullptr,
				"EOutputStates",
				"EOutputStates",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UObjectPool::execIsActorInUse)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActorInUse(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectPool::execEmptyPool)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EmptyPool();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectPool::execGetPoolSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPoolSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectPool::execGetInactiveActorsFromPool)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetInactiveActorsFromPool();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectPool::execGetActiveActorsFromPool)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetActiveActorsFromPool();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectPool::execReturnActorToPool)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReturnActorToPool(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectPool::execHasPoolFreeActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasPoolFreeActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectPool::execSpawnActorFromPool)
	{
		P_GET_STRUCT(FTransform,Z_Param_SpawnTransform);
		P_GET_OBJECT(AActor,Z_Param_Owner);
		P_GET_OBJECT(APawn,Z_Param_Instigator);
		P_GET_UBOOL(Z_Param_SpawnActorIfPoolIsEmpty);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_Branch);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_SpawnedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnActorFromPool(Z_Param_SpawnTransform,Z_Param_Owner,Z_Param_Instigator,Z_Param_SpawnActorIfPoolIsEmpty,(TEnumAsByte<EOutputStates>&)(Z_Param_Out_Branch),Z_Param_Out_SpawnedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectPool::execSimpleAddActorsToPool)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ActorsNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SimpleAddActorsToPool(Z_Param_ActorsNumber);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectPool::execAddActorsToPool)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ActorsNumber);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_Branch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddActorsToPool(Z_Param_ActorsNumber,(TEnumAsByte<EOutputStates>&)(Z_Param_Out_Branch));
		P_NATIVE_END;
	}
	void UObjectPool::StaticRegisterNativesUObjectPool()
	{
		UClass* Class = UObjectPool::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddActorsToPool", &UObjectPool::execAddActorsToPool },
			{ "EmptyPool", &UObjectPool::execEmptyPool },
			{ "GetActiveActorsFromPool", &UObjectPool::execGetActiveActorsFromPool },
			{ "GetInactiveActorsFromPool", &UObjectPool::execGetInactiveActorsFromPool },
			{ "GetPoolSize", &UObjectPool::execGetPoolSize },
			{ "HasPoolFreeActor", &UObjectPool::execHasPoolFreeActor },
			{ "IsActorInUse", &UObjectPool::execIsActorInUse },
			{ "ReturnActorToPool", &UObjectPool::execReturnActorToPool },
			{ "SimpleAddActorsToPool", &UObjectPool::execSimpleAddActorsToPool },
			{ "SpawnActorFromPool", &UObjectPool::execSpawnActorFromPool },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UObjectPool_AddActorsToPool_Statics
	{
		struct ObjectPool_eventAddActorsToPool_Parms
		{
			int32 ActorsNumber;
			TEnumAsByte<EOutputStates> Branch;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ActorsNumber;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectPool_AddActorsToPool_Statics::NewProp_ActorsNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UObjectPool_AddActorsToPool_Statics::NewProp_ActorsNumber = { "ActorsNumber", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectPool_eventAddActorsToPool_Parms, ActorsNumber), METADATA_PARAMS(Z_Construct_UFunction_UObjectPool_AddActorsToPool_Statics::NewProp_ActorsNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPool_AddActorsToPool_Statics::NewProp_ActorsNumber_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UObjectPool_AddActorsToPool_Statics::NewProp_Branch = { "Branch", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectPool_eventAddActorsToPool_Parms, Branch), Z_Construct_UEnum_UEObjectPooling_EOutputStates, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectPool_AddActorsToPool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPool_AddActorsToPool_Statics::NewProp_ActorsNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPool_AddActorsToPool_Statics::NewProp_Branch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectPool_AddActorsToPool_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Function that add more actors to the pool.\n// BLUEPRINT USE ONLY.\n" },
		{ "ExpandEnumAsExecs", "Branch" },
		{ "ModuleRelativePath", "Public/ObjectPool.h" },
		{ "ToolTip", "Function that add more actors to the pool.\nBLUEPRINT USE ONLY." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectPool_AddActorsToPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectPool, nullptr, "AddActorsToPool", nullptr, nullptr, sizeof(ObjectPool_eventAddActorsToPool_Parms), Z_Construct_UFunction_UObjectPool_AddActorsToPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPool_AddActorsToPool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectPool_AddActorsToPool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPool_AddActorsToPool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectPool_AddActorsToPool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectPool_AddActorsToPool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectPool_EmptyPool_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectPool_EmptyPool_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Completely empties the pool.\n// NOTE: Calling this function will cause all actors in the pool to be removed.\n// If you want to return an actor to the pool without removing it use ReturnActorToPool function.\n" },
		{ "ModuleRelativePath", "Public/ObjectPool.h" },
		{ "ToolTip", "Completely empties the pool.\nNOTE: Calling this function will cause all actors in the pool to be removed.\nIf you want to return an actor to the pool without removing it use ReturnActorToPool function." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectPool_EmptyPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectPool, nullptr, "EmptyPool", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectPool_EmptyPool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPool_EmptyPool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectPool_EmptyPool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectPool_EmptyPool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectPool_GetActiveActorsFromPool_Statics
	{
		struct ObjectPool_eventGetActiveActorsFromPool_Parms
		{
			TArray<AActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectPool_GetActiveActorsFromPool_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UObjectPool_GetActiveActorsFromPool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectPool_eventGetActiveActorsFromPool_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectPool_GetActiveActorsFromPool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPool_GetActiveActorsFromPool_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPool_GetActiveActorsFromPool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectPool_GetActiveActorsFromPool_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Returns array of active (use right now) actors in the pool.\n" },
		{ "ModuleRelativePath", "Public/ObjectPool.h" },
		{ "ToolTip", "Returns array of active (use right now) actors in the pool." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectPool_GetActiveActorsFromPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectPool, nullptr, "GetActiveActorsFromPool", nullptr, nullptr, sizeof(ObjectPool_eventGetActiveActorsFromPool_Parms), Z_Construct_UFunction_UObjectPool_GetActiveActorsFromPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPool_GetActiveActorsFromPool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectPool_GetActiveActorsFromPool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPool_GetActiveActorsFromPool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectPool_GetActiveActorsFromPool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectPool_GetActiveActorsFromPool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectPool_GetInactiveActorsFromPool_Statics
	{
		struct ObjectPool_eventGetInactiveActorsFromPool_Parms
		{
			TArray<AActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectPool_GetInactiveActorsFromPool_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UObjectPool_GetInactiveActorsFromPool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectPool_eventGetInactiveActorsFromPool_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectPool_GetInactiveActorsFromPool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPool_GetInactiveActorsFromPool_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPool_GetInactiveActorsFromPool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectPool_GetInactiveActorsFromPool_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Return array of inactive (already spawned, but not in use right now) actors in the pool.\n" },
		{ "ModuleRelativePath", "Public/ObjectPool.h" },
		{ "ToolTip", "Return array of inactive (already spawned, but not in use right now) actors in the pool." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectPool_GetInactiveActorsFromPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectPool, nullptr, "GetInactiveActorsFromPool", nullptr, nullptr, sizeof(ObjectPool_eventGetInactiveActorsFromPool_Parms), Z_Construct_UFunction_UObjectPool_GetInactiveActorsFromPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPool_GetInactiveActorsFromPool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectPool_GetInactiveActorsFromPool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPool_GetInactiveActorsFromPool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectPool_GetInactiveActorsFromPool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectPool_GetInactiveActorsFromPool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectPool_GetPoolSize_Statics
	{
		struct ObjectPool_eventGetPoolSize_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UObjectPool_GetPoolSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectPool_eventGetPoolSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectPool_GetPoolSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPool_GetPoolSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectPool_GetPoolSize_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Return total number of actors in the pool.\n" },
		{ "ModuleRelativePath", "Public/ObjectPool.h" },
		{ "ToolTip", "Return total number of actors in the pool." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectPool_GetPoolSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectPool, nullptr, "GetPoolSize", nullptr, nullptr, sizeof(ObjectPool_eventGetPoolSize_Parms), Z_Construct_UFunction_UObjectPool_GetPoolSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPool_GetPoolSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectPool_GetPoolSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPool_GetPoolSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectPool_GetPoolSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectPool_GetPoolSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectPool_HasPoolFreeActor_Statics
	{
		struct ObjectPool_eventHasPoolFreeActor_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UObjectPool_HasPoolFreeActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ObjectPool_eventHasPoolFreeActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjectPool_HasPoolFreeActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ObjectPool_eventHasPoolFreeActor_Parms), &Z_Construct_UFunction_UObjectPool_HasPoolFreeActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectPool_HasPoolFreeActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPool_HasPoolFreeActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectPool_HasPoolFreeActor_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Returns whether the pool has at least one free actor.\n" },
		{ "ModuleRelativePath", "Public/ObjectPool.h" },
		{ "ToolTip", "Returns whether the pool has at least one free actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectPool_HasPoolFreeActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectPool, nullptr, "HasPoolFreeActor", nullptr, nullptr, sizeof(ObjectPool_eventHasPoolFreeActor_Parms), Z_Construct_UFunction_UObjectPool_HasPoolFreeActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPool_HasPoolFreeActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectPool_HasPoolFreeActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPool_HasPoolFreeActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectPool_HasPoolFreeActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectPool_HasPoolFreeActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectPool_IsActorInUse_Statics
	{
		struct ObjectPool_eventIsActorInUse_Parms
		{
			AActor* Actor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectPool_IsActorInUse_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectPool_eventIsActorInUse_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UObjectPool_IsActorInUse_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ObjectPool_eventIsActorInUse_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjectPool_IsActorInUse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ObjectPool_eventIsActorInUse_Parms), &Z_Construct_UFunction_UObjectPool_IsActorInUse_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectPool_IsActorInUse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPool_IsActorInUse_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPool_IsActorInUse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectPool_IsActorInUse_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Is given actor used by this pool right now?\n" },
		{ "ModuleRelativePath", "Public/ObjectPool.h" },
		{ "ToolTip", "Is given actor used by this pool right now?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectPool_IsActorInUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectPool, nullptr, "IsActorInUse", nullptr, nullptr, sizeof(ObjectPool_eventIsActorInUse_Parms), Z_Construct_UFunction_UObjectPool_IsActorInUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPool_IsActorInUse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectPool_IsActorInUse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPool_IsActorInUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectPool_IsActorInUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectPool_IsActorInUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectPool_ReturnActorToPool_Statics
	{
		struct ObjectPool_eventReturnActorToPool_Parms
		{
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectPool_ReturnActorToPool_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectPool_eventReturnActorToPool_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectPool_ReturnActorToPool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPool_ReturnActorToPool_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectPool_ReturnActorToPool_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Function that returns actor back to the pool.\n" },
		{ "ModuleRelativePath", "Public/ObjectPool.h" },
		{ "ToolTip", "Function that returns actor back to the pool." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectPool_ReturnActorToPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectPool, nullptr, "ReturnActorToPool", nullptr, nullptr, sizeof(ObjectPool_eventReturnActorToPool_Parms), Z_Construct_UFunction_UObjectPool_ReturnActorToPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPool_ReturnActorToPool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectPool_ReturnActorToPool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPool_ReturnActorToPool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectPool_ReturnActorToPool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectPool_ReturnActorToPool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectPool_SimpleAddActorsToPool_Statics
	{
		struct ObjectPool_eventSimpleAddActorsToPool_Parms
		{
			int32 ActorsNumber;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ActorsNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectPool_SimpleAddActorsToPool_Statics::NewProp_ActorsNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UObjectPool_SimpleAddActorsToPool_Statics::NewProp_ActorsNumber = { "ActorsNumber", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectPool_eventSimpleAddActorsToPool_Parms, ActorsNumber), METADATA_PARAMS(Z_Construct_UFunction_UObjectPool_SimpleAddActorsToPool_Statics::NewProp_ActorsNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPool_SimpleAddActorsToPool_Statics::NewProp_ActorsNumber_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectPool_SimpleAddActorsToPool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPool_SimpleAddActorsToPool_Statics::NewProp_ActorsNumber,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectPool_SimpleAddActorsToPool_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Function that add more actors to the pool.\n// For C++ and blueprint usage.\n" },
		{ "ModuleRelativePath", "Public/ObjectPool.h" },
		{ "ToolTip", "Function that add more actors to the pool.\nFor C++ and blueprint usage." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectPool_SimpleAddActorsToPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectPool, nullptr, "SimpleAddActorsToPool", nullptr, nullptr, sizeof(ObjectPool_eventSimpleAddActorsToPool_Parms), Z_Construct_UFunction_UObjectPool_SimpleAddActorsToPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPool_SimpleAddActorsToPool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectPool_SimpleAddActorsToPool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPool_SimpleAddActorsToPool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectPool_SimpleAddActorsToPool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectPool_SimpleAddActorsToPool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectPool_SpawnActorFromPool_Statics
	{
		struct ObjectPool_eventSpawnActorFromPool_Parms
		{
			FTransform SpawnTransform;
			AActor* Owner;
			APawn* Instigator;
			bool SpawnActorIfPoolIsEmpty;
			TEnumAsByte<EOutputStates> Branch;
			AActor* SpawnedActor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static void NewProp_SpawnActorIfPoolIsEmpty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SpawnActorIfPoolIsEmpty;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branch;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UObjectPool_SpawnActorFromPool_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectPool_eventSpawnActorFromPool_Parms, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectPool_SpawnActorFromPool_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectPool_eventSpawnActorFromPool_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectPool_SpawnActorFromPool_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectPool_eventSpawnActorFromPool_Parms, Instigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UObjectPool_SpawnActorFromPool_Statics::NewProp_SpawnActorIfPoolIsEmpty_SetBit(void* Obj)
	{
		((ObjectPool_eventSpawnActorFromPool_Parms*)Obj)->SpawnActorIfPoolIsEmpty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjectPool_SpawnActorFromPool_Statics::NewProp_SpawnActorIfPoolIsEmpty = { "SpawnActorIfPoolIsEmpty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ObjectPool_eventSpawnActorFromPool_Parms), &Z_Construct_UFunction_UObjectPool_SpawnActorFromPool_Statics::NewProp_SpawnActorIfPoolIsEmpty_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UObjectPool_SpawnActorFromPool_Statics::NewProp_Branch = { "Branch", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectPool_eventSpawnActorFromPool_Parms, Branch), Z_Construct_UEnum_UEObjectPooling_EOutputStates, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectPool_SpawnActorFromPool_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectPool_eventSpawnActorFromPool_Parms, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectPool_SpawnActorFromPool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPool_SpawnActorFromPool_Statics::NewProp_SpawnTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPool_SpawnActorFromPool_Statics::NewProp_Owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPool_SpawnActorFromPool_Statics::NewProp_Instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPool_SpawnActorFromPool_Statics::NewProp_SpawnActorIfPoolIsEmpty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPool_SpawnActorFromPool_Statics::NewProp_Branch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPool_SpawnActorFromPool_Statics::NewProp_SpawnedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectPool_SpawnActorFromPool_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Function that takes actor out of the pool and gives him a new settings.\n// If there is no available actor in the pool and the SpawnActorIfPoolIsEmpty input variable is equal to true\n// the actor will be spawned and added to the pool.\n// BLUEPRINT USE ONLY.\n" },
		{ "ExpandEnumAsExecs", "Branch" },
		{ "ModuleRelativePath", "Public/ObjectPool.h" },
		{ "ToolTip", "Function that takes actor out of the pool and gives him a new settings.\nIf there is no available actor in the pool and the SpawnActorIfPoolIsEmpty input variable is equal to true\nthe actor will be spawned and added to the pool.\nBLUEPRINT USE ONLY." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectPool_SpawnActorFromPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectPool, nullptr, "SpawnActorFromPool", nullptr, nullptr, sizeof(ObjectPool_eventSpawnActorFromPool_Parms), Z_Construct_UFunction_UObjectPool_SpawnActorFromPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPool_SpawnActorFromPool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectPool_SpawnActorFromPool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPool_SpawnActorFromPool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectPool_SpawnActorFromPool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectPool_SpawnActorFromPool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UObjectPool_NoRegister()
	{
		return UObjectPool::StaticClass();
	}
	struct Z_Construct_UClass_UObjectPool_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnPoolObjectsOnBeginPlay_MetaData[];
#endif
		static void NewProp_bSpawnPoolObjectsOnBeginPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnPoolObjectsOnBeginPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoolActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PoolActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialPoolSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InitialPoolSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActorBeginSpawnedFromPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActorBeginSpawnedFromPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActorReturnedToPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActorReturnedToPool;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InactiveActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InactiveActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InactiveActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectPool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UEObjectPooling,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UObjectPool_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UObjectPool_AddActorsToPool, "AddActorsToPool" }, // 3587438672
		{ &Z_Construct_UFunction_UObjectPool_EmptyPool, "EmptyPool" }, // 1684747520
		{ &Z_Construct_UFunction_UObjectPool_GetActiveActorsFromPool, "GetActiveActorsFromPool" }, // 491751885
		{ &Z_Construct_UFunction_UObjectPool_GetInactiveActorsFromPool, "GetInactiveActorsFromPool" }, // 1801811231
		{ &Z_Construct_UFunction_UObjectPool_GetPoolSize, "GetPoolSize" }, // 875333956
		{ &Z_Construct_UFunction_UObjectPool_HasPoolFreeActor, "HasPoolFreeActor" }, // 69929752
		{ &Z_Construct_UFunction_UObjectPool_IsActorInUse, "IsActorInUse" }, // 1704379685
		{ &Z_Construct_UFunction_UObjectPool_ReturnActorToPool, "ReturnActorToPool" }, // 2295862769
		{ &Z_Construct_UFunction_UObjectPool_SimpleAddActorsToPool, "SimpleAddActorsToPool" }, // 1895633707
		{ &Z_Construct_UFunction_UObjectPool_SpawnActorFromPool, "SpawnActorFromPool" }, // 1341470511
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPool_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ObjectPool.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ObjectPool.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPool_Statics::NewProp_bSpawnPoolObjectsOnBeginPlay_MetaData[] = {
		{ "Category", "ObjectPool" },
		{ "Comment", "// Should pool actors be spawned on game begin play.\n" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/ObjectPool.h" },
		{ "ToolTip", "Should pool actors be spawned on game begin play." },
	};
#endif
	void Z_Construct_UClass_UObjectPool_Statics::NewProp_bSpawnPoolObjectsOnBeginPlay_SetBit(void* Obj)
	{
		((UObjectPool*)Obj)->bSpawnPoolObjectsOnBeginPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UObjectPool_Statics::NewProp_bSpawnPoolObjectsOnBeginPlay = { "bSpawnPoolObjectsOnBeginPlay", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UObjectPool), &Z_Construct_UClass_UObjectPool_Statics::NewProp_bSpawnPoolObjectsOnBeginPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UObjectPool_Statics::NewProp_bSpawnPoolObjectsOnBeginPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPool_Statics::NewProp_bSpawnPoolObjectsOnBeginPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPool_Statics::NewProp_PoolActor_MetaData[] = {
		{ "Category", "ObjectPool" },
		{ "Comment", "// Actor to use in the pool.\n" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/ObjectPool.h" },
		{ "ToolTip", "Actor to use in the pool." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UObjectPool_Statics::NewProp_PoolActor = { "PoolActor", nullptr, (EPropertyFlags)0x0015000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectPool, PoolActor), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UObjectPool_Statics::NewProp_PoolActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPool_Statics::NewProp_PoolActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPool_Statics::NewProp_InitialPoolSize_MetaData[] = {
		{ "Category", "ObjectPool" },
		{ "Comment", "// Define how big should be pool by default.\n" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/ObjectPool.h" },
		{ "ToolTip", "Define how big should be pool by default." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UObjectPool_Statics::NewProp_InitialPoolSize = { "InitialPoolSize", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectPool, InitialPoolSize), METADATA_PARAMS(Z_Construct_UClass_UObjectPool_Statics::NewProp_InitialPoolSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPool_Statics::NewProp_InitialPoolSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPool_Statics::NewProp_OnActorBeginSpawnedFromPool_MetaData[] = {
		{ "Category", "ObjectPool" },
		{ "Comment", "// Dispatcher. Each time an actor from the pool is spawned.\n" },
		{ "ModuleRelativePath", "Public/ObjectPool.h" },
		{ "ToolTip", "Dispatcher. Each time an actor from the pool is spawned." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UObjectPool_Statics::NewProp_OnActorBeginSpawnedFromPool = { "OnActorBeginSpawnedFromPool", nullptr, (EPropertyFlags)0x0010000010080004, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectPool, OnActorBeginSpawnedFromPool), Z_Construct_UDelegateFunction_UEObjectPooling_ActorSpawnedFromPool__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UObjectPool_Statics::NewProp_OnActorBeginSpawnedFromPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPool_Statics::NewProp_OnActorBeginSpawnedFromPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPool_Statics::NewProp_OnActorReturnedToPool_MetaData[] = {
		{ "Category", "ObjectPool" },
		{ "Comment", "// Dispatcher. Each time an actor is returned to the pool.\n" },
		{ "ModuleRelativePath", "Public/ObjectPool.h" },
		{ "ToolTip", "Dispatcher. Each time an actor is returned to the pool." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UObjectPool_Statics::NewProp_OnActorReturnedToPool = { "OnActorReturnedToPool", nullptr, (EPropertyFlags)0x0010000010080004, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectPool, OnActorReturnedToPool), Z_Construct_UDelegateFunction_UEObjectPooling_ActorReturnedToPool__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UObjectPool_Statics::NewProp_OnActorReturnedToPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPool_Statics::NewProp_OnActorReturnedToPool_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectPool_Statics::NewProp_ActiveActors_Inner = { "ActiveActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPool_Statics::NewProp_ActiveActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectPool.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjectPool_Statics::NewProp_ActiveActors = { "ActiveActors", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectPool, ActiveActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UObjectPool_Statics::NewProp_ActiveActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPool_Statics::NewProp_ActiveActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectPool_Statics::NewProp_InactiveActors_Inner = { "InactiveActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPool_Statics::NewProp_InactiveActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectPool.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjectPool_Statics::NewProp_InactiveActors = { "InactiveActors", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectPool, InactiveActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UObjectPool_Statics::NewProp_InactiveActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPool_Statics::NewProp_InactiveActors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectPool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPool_Statics::NewProp_bSpawnPoolObjectsOnBeginPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPool_Statics::NewProp_PoolActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPool_Statics::NewProp_InitialPoolSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPool_Statics::NewProp_OnActorBeginSpawnedFromPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPool_Statics::NewProp_OnActorReturnedToPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPool_Statics::NewProp_ActiveActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPool_Statics::NewProp_ActiveActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPool_Statics::NewProp_InactiveActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPool_Statics::NewProp_InactiveActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectPool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectPool>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObjectPool_Statics::ClassParams = {
		&UObjectPool::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UObjectPool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPool_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UObjectPool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectPool()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObjectPool_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObjectPool, 1740933042);
	template<> UEOBJECTPOOLING_API UClass* StaticClass<UObjectPool>()
	{
		return UObjectPool::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObjectPool(Z_Construct_UClass_UObjectPool, &UObjectPool::StaticClass, TEXT("/Script/UEObjectPooling"), TEXT("UObjectPool"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectPool);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
