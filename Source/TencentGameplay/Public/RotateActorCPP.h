// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RotateActorCPP.generated.h"

UCLASS()
class TENCENTGAMEPLAY_API ARotateActorCPP : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARotateActorCPP();

	UPROPERTY(EditAnywhere)
	float RotateSpeedCPP = 1.0f;

	UFUNCTION(BlueprintCallable)
	virtual void RotateCPP(float Time);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
