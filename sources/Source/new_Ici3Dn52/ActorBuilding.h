// Copyright 2020-2021 CesiumGS, Inc. and Contributors

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorBuilding.generated.h"

UCLASS()
class NEW_ICI3DN52_API AActorBuilding : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AActorBuilding();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
