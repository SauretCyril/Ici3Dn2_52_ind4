// Copyright 2020-2021 CesiumGS, Inc. and Contributors


#include "ActorBuilding.h"

// Sets default values
AActorBuilding::AActorBuilding()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AActorBuilding::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AActorBuilding::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

