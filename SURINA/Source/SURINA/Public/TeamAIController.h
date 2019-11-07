// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "GenericTeamAgentInterface.h"
#include "TeamAIController.generated.h"

/**
 * 
 */
UCLASS()
class SURINA_API ATeamAIController : public AAIController
{
	GENERATED_BODY()
	ATeamAIController();

public:
	// Override this function 
	ETeamAttitude::Type GetTeamAttitudeTowards(const AActor& Other) const override;
	
};
