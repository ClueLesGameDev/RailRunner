// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "MasterPlatform.h"

// Sets default values
AMasterPlatform::AMasterPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("root"));
	Root->SetupAttachment(RootComponent);

	Platform = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Platform"));
	Platform->SetupAttachment(Root);

	SpawnPointer = CreateDefaultSubobject<UArrowComponent>(TEXT("SpawnPointer"));

	PlatformCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("PlatformCollider"));
	PlatformCollider->SetupAttachment(SpawnPointer);
}

// Called when the game starts or when spawned
void AMasterPlatform::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMasterPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

