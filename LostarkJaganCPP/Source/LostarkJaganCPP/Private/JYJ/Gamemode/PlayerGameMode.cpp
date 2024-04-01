// Fill out your copyright notice in the Description page of Project Settings.


#include "JYJ/Gamemode/PlayerGameMode.h"
#include "JYJ/Controller/TP_TopDownPlayerController.h"

APlayerGameMode::APlayerGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATP_TopDownPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass( TEXT( "/Game/LostArkJagan/JYJ/Blueprint/Player/BP_ElementalPlayer" ) );
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass( TEXT( "/Game/LostArkJagan/JYJ/Blueprint/Controller/BP_PlayerController" ) );
	if (PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}
