// Copyright Epic Games, Inc. All Rights Reserved.

#include "BallGameGameMode.h"
#include "BallGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABallGameGameMode::ABallGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
