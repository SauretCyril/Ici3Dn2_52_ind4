// Copyright 2020-2021 CesiumGS, Inc. and Contributors

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Actor_Building.generated.h"

UCLASS()
class NEW_ICI3DN52_API AActor_Building : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AActor_Building();

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

#if WITH_EDITOR
	UFUNCTION(CallInEditor, Category = "Custom")
	void MyButtonFunction();
#endif

	// Ajout de la propriété publique de type string
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building")
	FString BuildingName;
};
