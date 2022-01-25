// Copyright Epic Games, Inc. All Rights Reserved.

#include "RailRunnerGameMode.h"
#include "RailRunnerCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARailRunnerGameMode::ARailRunnerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
