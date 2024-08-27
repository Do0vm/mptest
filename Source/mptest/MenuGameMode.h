// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MenuGameMode.generated.h"

/**
 * 
 */
UCLASS()
class MPTEST_API AMenuGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:

	virtual void PostLogin(APlayerController* NewPlayer) override;
	virtual void Logout(AController* Exiting) override;

};
