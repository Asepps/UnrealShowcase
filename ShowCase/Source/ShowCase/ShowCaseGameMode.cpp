// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "ShowCase.h"
#include "ShowCaseGameMode.h"
#include "ShowCaseHUD.h"
#include "ShowCaseCharacter.h"

AShowCaseGameMode::AShowCaseGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AShowCaseHUD::StaticClass();
}
