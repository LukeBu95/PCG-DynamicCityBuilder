// Copyright Epic Games, Inc. All Rights Reserved.

#include "ASPGameGameMode.h"
#include "ASPGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AASPGameGameMode::AASPGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
