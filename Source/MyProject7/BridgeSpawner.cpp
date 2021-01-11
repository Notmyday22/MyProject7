// Fill out your copyright notice in the Description page of Project Settings.


#include "BridgeSpawner.h"


// Sets default values
ABridgeSpawner::ABridgeSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BridgeToSpawn = CreateDefaultSubobject<UStaticMeshComponent>("bridgeToSpawn");

}

// Called when the game starts or when spawned
void ABridgeSpawner::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABridgeSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector newLocation = GetActorLocation();
	newLocation.Z += 1.0f;
	SetActorLocation(newLocation);

}

