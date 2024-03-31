// Fill out your copyright notice in the Description page of Project Settings.


#include "JYJ/Player/ElementalPlayer.h"

// Sets default values
AElementalPlayer::AElementalPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AElementalPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AElementalPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AElementalPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

