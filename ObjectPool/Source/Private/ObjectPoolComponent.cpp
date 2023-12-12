// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjectPoolComponent.h"

#include "AudioDevice.h"
#include "ObjectPoolInterface.h"

UObjectPoolComponent::UObjectPoolComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UObjectPoolComponent::AddActorsToPool(int const ActorsNumber)
{
	if (PoolActorClass && ActorsNumber > 0)
	{
		FActorSpawnParameters SpawnParameters;
		SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		for (int i=0; i < ActorsNumber; i++)
		{
			if (AActor* SpawnedActor = GetWorld()->SpawnActor<AActor>(PoolActorClass, FVector().ZeroVector, FRotator().ZeroRotator, SpawnParameters))
			{
				SetPoolActorHidden(SpawnedActor, true);
				InactiveActors.Add(SpawnedActor);
			}
		}
	}
}

void UObjectPoolComponent::SpawnActorFromPool(FTransform SpawnTransform, AActor* Owner, APawn* Instigator,
	bool SpawnActorIfPoolIsEmpty, TEnumAsByte<EOutputStates>& Branch, AActor*& SpawnedActor)
{
	if(!HasPoolFreeActor() && !SpawnActorIfPoolIsEmpty)
	{
		Branch = EOutputStates::Failed;
		SpawnedActor = nullptr;
		return;
	}
	
	AActor* PoolActorToSpawn;
	
	if(HasPoolFreeActor())
	{
		PoolActorToSpawn = InactiveActors.Top();
		
		PoolActorToSpawn->SetActorTransform(SpawnTransform);
		PoolActorToSpawn->SetOwner(Owner);
		PoolActorToSpawn->SetInstigator(Instigator);
		SetPoolActorHidden(PoolActorToSpawn, false);

		InactiveActors.Remove(PoolActorToSpawn);
	}
	
	else if(SpawnActorIfPoolIsEmpty)
	{
		FActorSpawnParameters SpawnInfo;
		SpawnInfo.Owner = Owner;
		SpawnInfo.Instigator = Instigator;
		
		PoolActorToSpawn = GetWorld()->SpawnActor<AActor>(PoolActorClass, SpawnTransform, SpawnInfo);
	}
	
	ActiveActors.Add(PoolActorToSpawn);
	
	if (PoolActorToSpawn->GetClass()->ImplementsInterface(UObjectPoolInterface::StaticClass()))
	{
		IObjectPoolInterface::Execute_OnActorSpawnedFromPool(PoolActorToSpawn);
	}

	OnActorSpawnedFromPool.Broadcast(PoolActorToSpawn);

	Branch = EOutputStates::Success;
	SpawnedActor = PoolActorToSpawn;
	return;
}

bool UObjectPoolComponent::HasPoolFreeActor() const
{
	return !InactiveActors.IsEmpty();
}

void UObjectPoolComponent::ReturnActorToPool(AActor* Actor)
{
	if(ActiveActors.Contains(Actor))
	{
		SetPoolActorHidden(Actor, true);
		
		ActiveActors.Remove(Actor);
		InactiveActors.Add(Actor);

		if (Actor->GetClass()->ImplementsInterface(UObjectPoolInterface::StaticClass()))
		{
			IObjectPoolInterface::Execute_OnActorDespawnedToPool(Actor);
		}
		
		OnActorReturnedToPool.Broadcast(Actor);
	}
}

int32 UObjectPoolComponent::GetPoolSize() const
{
	return ActiveActors.Num() + InactiveActors.Num();
}

void UObjectPoolComponent::EmptyPool()
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
}

bool UObjectPoolComponent::IsActorInUse(AActor* Actor) const
{
	if (Actor) return ActiveActors.Contains(Actor);
	return false;
}

void UObjectPoolComponent::BeginPlay()
{
	Super::BeginPlay();

	if (bSpawnPoolObjectsOnBeginPlay) AddActorsToPool(InitialPoolSize);
	
}

void UObjectPoolComponent::SetPoolActorHidden(AActor* Actor, bool bNewHidden)
{
	Actor->SetActorHiddenInGame(bNewHidden);
	Actor->SetActorEnableCollision(!bNewHidden);
	Actor->SetActorTickEnabled(!bNewHidden);
}

