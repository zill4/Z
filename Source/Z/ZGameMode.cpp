// Copyright Epic Games, Inc. All Rights Reserved.

#include "ZGameMode.h"
#include "ZCharacter.h"
#include "UObject/ConstructorHelpers.h"

AZGameMode::AZGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
