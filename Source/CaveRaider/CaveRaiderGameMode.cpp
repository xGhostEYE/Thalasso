// Copyright Epic Games, Inc. All Rights Reserved.

#include "CaveRaiderGameMode.h"
#include "CaveRaiderCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACaveRaiderGameMode::ACaveRaiderGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
