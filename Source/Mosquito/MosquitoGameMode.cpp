// Copyright Epic Games, Inc. All Rights Reserved.

#include "MosquitoGameMode.h"
#include "MosquitoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMosquitoGameMode::AMosquitoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_MosquitoCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
