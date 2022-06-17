/*
	MIT License	
	Copyright (c) 2022 Dawid Slabkowski
	https://github.com/dslabkowski
	https://github.com/dslabkowski/UEObjectPooling
*/


#include "ObjectPool.h"


UObjectPool::UObjectPool()
{
	PrimaryComponentTick.bCanEverTick = false;
}


// Called when the game starts
void UObjectPool::BeginPlay()
{
	Super::BeginPlay();

	if(bSpawnPoolObjectsOnBeginPlay)
	{
		SimpleAddActorsToPool(InitialPoolSize);
	}
	
}


// Called every frame
void UObjectPool::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UObjectPool::AddActorsToPool(int const ActorsNumber,
								TEnumAsByte<EOutputStates>& Branch)
{
	if(PoolActor && ActorsNumber > 0)
	{
		FActorSpawnParameters SpawnParameters;
		SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		for (int i = 0; i < ActorsNumber; i++)
		{
			AActor* SpawnedActor = GetWorld()->SpawnActor<AActor>(PoolActor, FVector().ZeroVector, FRotator().ZeroRotator, SpawnParameters);
			if(SpawnedActor)
			{
				SpawnedActor->SetActorHiddenInGame(true);
				SpawnedActor->SetActorEnableCollision(false);
				SpawnedActor->SetActorTickEnabled(false);

				InactiveActors.Add(SpawnedActor);
			}
			else
			{
				Branch = EOutputStates::Failed;
				return;					
			}
		}
		Branch = EOutputStates::Success;
		return;
	}
	Branch = EOutputStates::Failed;
	return;
}

void UObjectPool::SimpleAddActorsToPool(int const ActorsNumber)
{
	if(PoolActor && ActorsNumber > 0)
	{
		for (int i = 0; i < ActorsNumber; i++)
		{
			AActor* SpawnedActor = GetWorld()->SpawnActor<AActor>(PoolActor, FVector().ZeroVector, FRotator().ZeroRotator);
					SpawnedActor->SetActorHiddenInGame(true);
					SpawnedActor->SetActorEnableCollision(false);
					SpawnedActor->SetActorTickEnabled(false);

			InactiveActors.Add(SpawnedActor);
		}
	}
}

void UObjectPool::SpawnActorFromPool(const FTransform SpawnTransform, AActor* Owner, APawn* Instigator, const bool SpawnActorIfPoolIsEmpty,
                                     TEnumAsByte<EOutputStates>& Branch, AActor*& SpawnedActor)
{
	if(HasPoolFreeActor())
	{
		AActor* PoolActorToSpawn = InactiveActors.Top();
				PoolActorToSpawn->SetActorTransform(SpawnTransform);
				PoolActorToSpawn->SetOwner(Owner);
				PoolActorToSpawn->SetInstigator(Instigator);
				PoolActorToSpawn->SetActorHiddenInGame(false);
				PoolActorToSpawn->SetActorEnableCollision(true);
				PoolActorToSpawn->SetActorTickEnabled(true);

		InactiveActors.Remove(PoolActorToSpawn);
		ActiveActors.Add(PoolActorToSpawn);

		OnActorBeginSpawnedFromPool.Broadcast(PoolActorToSpawn);

		Branch = EOutputStates::Success;
		SpawnedActor = PoolActorToSpawn;
		return;
	}
	else if(SpawnActorIfPoolIsEmpty)
	{
		FActorSpawnParameters SpawnInfo;
		SpawnInfo.Owner = Owner;
		SpawnInfo.Instigator = Instigator;
		
		AActor* PoolActorToSpawn = GetWorld()->SpawnActor<AActor>(PoolActor, SpawnTransform, SpawnInfo);
		ActiveActors.Add(PoolActorToSpawn);
		
		OnActorBeginSpawnedFromPool.Broadcast(PoolActorToSpawn);

		Branch = EOutputStates::Success;
		SpawnedActor = PoolActorToSpawn;
		return;
	}
	else
	{
		Branch = EOutputStates::Failed;
        SpawnedActor = nullptr;
        return;
	}
}

bool UObjectPool::HasPoolFreeActor() const
{
	return InactiveActors.IsValidIndex(0);
}

void UObjectPool::ReturnActorToPool(AActor* Actor)
{
	if(ActiveActors.Contains(Actor))
	{
		Actor->SetActorHiddenInGame(true);
		Actor->SetActorEnableCollision(false);
		Actor->SetActorTickEnabled(false);

		ActiveActors.Remove(Actor);
		InactiveActors.Add(Actor);
		
		OnActorReturnedToPool.Broadcast(Actor);
	}
}

TArray<AActor*> UObjectPool::GetActiveActorsFromPool() const
{
	return ActiveActors;
}

TArray<AActor*> UObjectPool::GetInactiveActorsFromPool() const
{
	return InactiveActors;
}

int32 UObjectPool::GetPoolSize() const
{
	return ActiveActors.Num() + InactiveActors.Num();
}

void UObjectPool::EmptyPool()
{
	TArray<AActor*> Pool;
	Pool.Append(ActiveActors);
	Pool.Append(InactiveActors);

	for (AActor* ActorInPool : Pool)
	{
		ActorInPool->Destroy();
	}

	ActiveActors.Empty();
	InactiveActors.Empty();

	return;
}

bool UObjectPool::IsActorInUse(AActor* Actor) const
{
	const int InUse = ActiveActors.Find(Actor);
	return InUse == -1 ? true : false;
}
