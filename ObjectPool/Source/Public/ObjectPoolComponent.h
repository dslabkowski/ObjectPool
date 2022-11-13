// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ObjectPoolComponent.generated.h"

UENUM(BlueprintType)
enum EOutputStates
{
	Success		UMETA(DisplayName = "Success"),
	Failed		UMETA(DisplayName = "Failed"),
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActorSpawnedFromPool, AActor*, SpawnedActor);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActorReturnedToPool, AActor*, ReturnedActor);

UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class OBJECTPOOL_API UObjectPoolComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UObjectPoolComponent();

	//Should pool actors be spawned on this component event begin play.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn="true"))
	bool bSpawnPoolObjectsOnBeginPlay = true;

	//Subclass of AActor class to use in the pool.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ExposeOnSpawn="true"))
	TSubclassOf<AActor> PoolActor;

	//Define how big should be pool by default.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn="true"))
	int32 InitialPoolSize;

	//Dispatcher. Each time an actor from the pool is spawned.
	UPROPERTY(BlueprintAssignable, BlueprintReadWrite)
	FActorSpawnedFromPool OnActorBeginSpawnedFromPool;

	//Dispatcher. Each time an actor is returned to the pool.
	UPROPERTY(BlueprintAssignable, BlueprintReadWrite)
	FActorReturnedToPool OnActorReturnedToPool;
	
	//Adds the specified number of actors to the pool.
	UFUNCTION(BlueprintCallable, Meta = (Keywords = "object pool, pool, object"))
	void AddActorsToPool(int const ActorsNumber);
	
	/***
	 * Returns an actor from the pool if any is available.
	 * @param SpawnActorIfPoolIsEmpty If there is no available actor in the pool spawn another actor and add it to pool.
	 */
	UFUNCTION(BlueprintCallable, Meta = (ExpandEnumAsExecs = "Branch", Keywords = "object pool, pool, object"))
	void SpawnActorFromPool(FTransform SpawnTransform, AActor* Owner, APawn* Instigator, bool SpawnActorIfPoolIsEmpty,
							TEnumAsByte<EOutputStates>& Branch, AActor*& SpawnedActor);

	//Returns whether the pool has at least one free actor.
	UFUNCTION(BlueprintCallable, BlueprintPure, Meta = (Keywords = "object pool, pool, object"))
	bool HasPoolFreeActor() const;

	//Returns given actor back to the pool.
	UFUNCTION(BlueprintCallable, Meta = (Keywords = "object pool, pool, object"))
	void ReturnActorToPool(AActor* Actor);

	//Returns array of active actors in the pool.
	UFUNCTION(BlueprintCallable, Meta = (Keywords = "object pool, pool, object"))
	TArray<AActor*> GetActiveActorsFromPool() const;

	//Return array of inactive actors in the pool.
	UFUNCTION(BlueprintCallable, Meta = (Keywords = "object pool, pool, object"))
	TArray<AActor*> GetInactiveActorsFromPool() const;

	//Return total number of actors in the pool.
	UFUNCTION(BlueprintCallable, Meta = (Keywords = "object pool, pool, object"))
	int32 GetPoolSize() const;
	
	/***
	 * Destroys all the actors in the pool and releases the memory.
	 * @warning Calling this function will cause all actors in the pool to be removed.
	 * @warning Can cause hitch.
	 */
	UFUNCTION(BlueprintCallable, Meta = (Keywords = "object pool, pool, object"))
	void EmptyPool();

	// Is given actor used by this pool right now.
	UFUNCTION(BlueprintCallable, BlueprintPure, Meta = (Keywords = "object pool, pool, object"))
	bool IsActorInUse(AActor* Actor) const;

protected:
	virtual void BeginPlay() override;

	UPROPERTY()
	TArray<AActor*> ActiveActors;

	UPROPERTY()
	TArray<AActor*> InactiveActors;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
