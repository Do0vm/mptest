// Copyright Epic Games, Inc. All Rights Reserved.

#include "mptestGameMode.h"
#include "mptestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AmptestGameMode::AmptestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
