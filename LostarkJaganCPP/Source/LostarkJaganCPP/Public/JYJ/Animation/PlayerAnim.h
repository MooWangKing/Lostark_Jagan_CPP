// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "PlayerAnim.generated.h"

/**
 * 
 */
UCLASS()
class LOSTARKJAGANCPP_API UPlayerAnim : public UAnimInstance
{
	GENERATED_BODY()

public:
	UPlayerAnim();
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	//UPROPERTY()
	//class AElementalPlayer* player;

	UPROPERTY( EditDefaultsOnly, BlueprintReadOnly )
	float velocity = 0.0f;
	
};
