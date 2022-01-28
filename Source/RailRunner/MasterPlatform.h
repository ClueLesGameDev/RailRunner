// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MasterPlatform.generated.h"

UCLASS()
class RAILRUNNER_API AMasterPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMasterPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

//custom componenets
protected:
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class USceneComponent* Root;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* Platform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UArrowComponent* SpawnPointer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBoxComponent* PlatformCollider;
	


};
