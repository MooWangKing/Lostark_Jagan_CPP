// Fill out your copyright notice in the Description page of Project Settings.


#include "JYJ/Animation/PlayerAnim.h"
#include "JYJ/Player/ElementalPlayer.h"

UPlayerAnim::UPlayerAnim()
{

}

void UPlayerAnim::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	auto player = TryGetPawnOwner();

	if(player)
	{
		velocity = player->GetVelocity().Size();
	}
	
}
