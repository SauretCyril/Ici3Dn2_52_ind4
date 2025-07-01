// Copyright 2020-2021 CesiumGS, Inc. and Contributors


#include "Actor_Building.h"

// Sets default values
AActor_Building::AActor_Building()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AActor_Building::BeginPlay()
{
    
    Super::BeginPlay();
    BuildingName = TEXT("DefaultName");
	
}

// Called every frame
void AActor_Building::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

#if WITH_EDITOR
void AActor_Building::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
   
    Super::PostEditChangeProperty(PropertyChangedEvent);
}

void AActor_Building::MyButtonFunction()
{
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Button Pressed!"));
    }
}
#endif