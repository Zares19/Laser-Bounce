// Copyright Epic Games, Inc. All Rights Reserved.

#include "Laser_BounceGameMode.h"
#include "Laser_BounceHUD.h"
#include "Laser_BounceCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALaser_BounceGameMode::ALaser_BounceGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ALaser_BounceHUD::StaticClass();
}
