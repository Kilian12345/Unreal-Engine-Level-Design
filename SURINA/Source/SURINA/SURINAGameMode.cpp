// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "SURINAGameMode.h"
#include "SURINAPlayerController.h"
#include "SURINACharacter.h"
#include "UObject/ConstructorHelpers.h"

ASURINAGameMode::ASURINAGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ASURINAPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}