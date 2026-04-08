// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractionInterface.h"
#include "InteractableActor.generated.h"

UCLASS()
class SEM2UNIVERSITYTASKS_API AInteractableActor : public AActor, public IInteractionInterface
{
	GENERATED_BODY()
	
public:	
	virtual bool CanInteract(AActor* Interactor) const override { return true; }
	virtual void Interact(AActor* Interactor) override;

	AInteractableActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
