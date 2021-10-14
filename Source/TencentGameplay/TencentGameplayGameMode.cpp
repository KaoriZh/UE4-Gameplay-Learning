// Copyright Epic Games, Inc. All Rights Reserved.

#include "TencentGameplayGameMode.h"
#include "TencentGameplayCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATencentGameplayGameMode::ATencentGameplayGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
