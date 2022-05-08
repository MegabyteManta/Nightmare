// Copyright Epic Games, Inc. All Rights Reserved.

#include "NightmareGameMode.h"
#include "NightmareHUD.h"
#include "NightmareCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANightmareGameMode::ANightmareGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ANightmareHUD::StaticClass();
}
