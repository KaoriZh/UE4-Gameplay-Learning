// Fill out your copyright notice in the Description page of Project Settings.


#include "RotateActorCPP.h"

// Sets default values
ARotateActorCPP::ARotateActorCPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ARotateActorCPP::RotateCPP(float Time) {
	const FRotator Rotator = FRotator::MakeFromEuler( FVector(Time * RotateSpeedCPP, 0.0f, 0.0f) );
	this->AddActorLocalRotation(Rotator);
}

// Called when the game starts or when spawned
void ARotateActorCPP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARotateActorCPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

