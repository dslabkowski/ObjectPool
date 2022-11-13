// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ObjectPoolInterface.generated.h"

UINTERFACE(BlueprintType)
class UObjectPoolInterface : public UInterface
{
	GENERATED_BODY()
};

class OBJECTPOOL_API IObjectPoolInterface
{
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void OnActorSpawnedFromPool();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void OnActorDespawnedToPool();
};
