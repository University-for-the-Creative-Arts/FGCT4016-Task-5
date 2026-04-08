// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "TestActor.generated.h"

UCLASS()
class SEM2UNIVERSITYTASKS_API ATestActor : public AActor
{
	GENERATED_BODY()
	
public:	

	ATestActor();

protected:
	
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Interaction")
	USphereComponent* SphereCollision;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

public:	

	virtual void Tick(float DeltaTime) override;


public:
	UFUNCTION(BlueprintCallable)
	virtual void Greeting();

public:
	virtual void OnConstruction(const FTransform& Transform) override;
};
