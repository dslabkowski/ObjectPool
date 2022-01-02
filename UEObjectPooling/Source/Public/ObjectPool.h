/*
	MIT License	
	Copyright (c) 2022 Dawid Slabkowski
	https://github.com/dslabkowski
	https://github.com/dslabkowski/UEObjectPooling
*/

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ObjectPool.generated.h"

UENUM(BlueprintType)
enum EOutputStates
{
	Success UMETA(DisplayName = "Success"),
	Failed UMETA(DisplayName = "Failed"),
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActorSpawnedFromPool, AActor*, SpawnedActor);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActorReturnedToPool, AActor*, ReturnedActor);

UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class UEOBJECTPOOLING_API UObjectPool : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UObjectPool();

	// Should pool actors be spawned on game begin play.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn="true"))
	bool bSpawnPoolObjectsOnBeginPlay = true;

	// Actor to use in the pool.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ExposeOnSpawn="true"))
	TSubclassOf<AActor> PoolActor;

	// Define how big should be pool by default.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn="true"))
	int32 InitialPoolSize;

	// Dispatcher. Each time an actor from the pool is spawned.
	UPROPERTY(BlueprintAssignable, BlueprintReadWrite)
		FActorSpawnedFromPool OnActorBeginSpawnedFromPool;

	// Dispatcher. Each time an actor is returned to the pool.
	UPROPERTY(BlueprintAssignable, BlueprintReadWrite)
		FActorReturnedToPool OnActorReturnedToPool;

	// Function that add more actors to the pool.
	// BLUEPRINT USE ONLY.
	UFUNCTION(BlueprintCallable, Meta = (ExpandEnumAsExecs = "Branch", Keywords = "object pool, pool, object"))
		void AddActorsToPool(int const ActorsNumber,
							TEnumAsByte<EOutputStates>& Branch);

	// Function that add more actors to the pool.
	// For C++ and blueprint usage.
	UFUNCTION(BlueprintCallable, Meta = (Keywords = "object pool, pool, object"))
		void SimpleAddActorsToPool(int const ActorsNumber);

	// Function that takes actor out of the pool and gives him a new settings.
	// If there is no available actor in the pool and the SpawnActorIfPoolIsEmpty input variable is equal to true
	// the actor will be spawned and added to the pool.
	// BLUEPRINT USE ONLY.
	UFUNCTION(BlueprintCallable, Meta = (ExpandEnumAsExecs = "Branch", Keywords = "object pool, pool, object"))
		void SpawnActorFromPool(FTransform SpawnTransform, AActor* Owner, APawn* Instigator, bool SpawnActorIfPoolIsEmpty,
								TEnumAsByte<EOutputStates>& Branch, AActor*& SpawnedActor);

	// Returns whether the pool has at least one free actor.
	UFUNCTION(BlueprintCallable, BlueprintPure, Meta = (Keywords = "object pool, pool, object"))
		bool HasPoolFreeActor() const;

	// Function that returns actor back to the pool.
	UFUNCTION(BlueprintCallable, Meta = (Keywords = "object pool, pool, object"))
		void ReturnActorToPool(AActor* Actor);

	// Returns array of active (use right now) actors in the pool.
	UFUNCTION(BlueprintCallable, Meta = (Keywords = "object pool, pool, object"))
		TArray<AActor*> GetActiveActorsFromPool() const;

	// Return array of inactive (already spawned, but not in use right now) actors in the pool.
	UFUNCTION(BlueprintCallable, Meta = (Keywords = "object pool, pool, object"))
		TArray<AActor*> GetInactiveActorsFromPool() const;

	// Return total number of actors in the pool.
	UFUNCTION(BlueprintCallable, Meta = (Keywords = "object pool, pool, object"))
		int32 GetPoolSize() const;

	// Completely empties the pool.
	// NOTE: Calling this function will cause all actors in the pool to be removed.
	// If you want to return an actor to the pool without removing it use ReturnActorToPool function.
	UFUNCTION(BlueprintCallable, Meta = (Keywords = "object pool, pool, object"))
		void EmptyPool();

	// Is given actor used by this pool right now?
	UFUNCTION(BlueprintCallable, BlueprintPure, Meta = (Keywords = "object pool, pool, object"))
		bool IsActorInUse(AActor* Actor) const;

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY()
	TArray<AActor*> ActiveActors;

	UPROPERTY()
	TArray<AActor*> InactiveActors;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;
};


