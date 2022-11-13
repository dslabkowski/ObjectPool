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
	if (PoolActor && ActorsNumber > 0)
	{
		FActorSpawnParameters SpawnParameters;
		SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		for (int i=0; i < ActorsNumber; i++)
		{
			if (AActor* SpawnedActor = GetWorld()->SpawnActor<AActor>(PoolActor, FVector().ZeroVector, FRotator().ZeroRotator, SpawnParameters))
			{
				SpawnedActor->SetActorHiddenInGame(true);
				SpawnedActor->SetActorEnableCollision(false);
				SpawnedActor->SetActorTickEnabled(false);

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
		PoolActorToSpawn->SetActorHiddenInGame(false);
		PoolActorToSpawn->SetActorEnableCollision(true);
		PoolActorToSpawn->SetActorTickEnabled(true);

		InactiveActors.Remove(PoolActorToSpawn);
	}
	
	else if(SpawnActorIfPoolIsEmpty)
	{
		FActorSpawnParameters SpawnInfo;
		SpawnInfo.Owner = Owner;
		SpawnInfo.Instigator = Instigator;
		
		PoolActorToSpawn = GetWorld()->SpawnActor<AActor>(PoolActor, SpawnTransform, SpawnInfo);
	}
	
	ActiveActors.Add(PoolActorToSpawn);
	
	if (PoolActorToSpawn->GetClass()->ImplementsInterface(UObjectPoolInterface::StaticClass()))
	{
		IObjectPoolInterface::Execute_OnActorSpawnedFromPool(PoolActorToSpawn);
	}

	OnActorBeginSpawnedFromPool.Broadcast(PoolActorToSpawn);

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
		Actor->SetActorHiddenInGame(true);
		Actor->SetActorEnableCollision(false);
		Actor->SetActorTickEnabled(false);

		ActiveActors.Remove(Actor);
		InactiveActors.Add(Actor);

		if (Actor->GetClass()->ImplementsInterface(UObjectPoolInterface::StaticClass()))
		{
			IObjectPoolInterface::Execute_OnActorDespawnedToPool(Actor);
		}
		
		OnActorReturnedToPool.Broadcast(Actor);
	}
}

TArray<AActor*> UObjectPoolComponent::GetActiveActorsFromPool() const
{
	return ActiveActors;
}

TArray<AActor*> UObjectPoolComponent::GetInactiveActorsFromPool() const
{
	return InactiveActors;
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
	if (Actor)
	{
		return ActiveActors.Contains(Actor);	
	}
		return nullptr;
}

void UObjectPoolComponent::BeginPlay()
{
	Super::BeginPlay();

	if (bSpawnPoolObjectsOnBeginPlay) { AddActorsToPool(InitialPoolSize); }
	
}

void UObjectPoolComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

