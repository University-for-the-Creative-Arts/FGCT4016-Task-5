// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractionInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInteractionInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class SEM2UNIVERSITYTASKS_API IInteractionInterface
{
	GENERATED_BODY()

public:
	virtual bool CanInteract(AActor* Interactor) const = 0;
	virtual void Interact(AActor* Interactor) = 0;
};