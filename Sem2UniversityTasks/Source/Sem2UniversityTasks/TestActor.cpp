// Fill out your copyright notice in the Description page of Project Settings.


#include "TestActor.h"
#include "InteractionInterface.h"


ATestActor::ATestActor()
{
	SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
	RootComponent = SphereCollision;
	SphereCollision->SetSphereRadius(100.0f);
	SphereCollision->SetCollisionProfileName(TEXT("Trigger"));
	SphereCollision->OnComponentBeginOverlap.AddDynamic(this, &ATestActor::OnOverlapBegin);

	PrimaryActorTick.bCanEverTick = true;

}

void ATestActor::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor != this)
	{
		IInteractionInterface* Target = Cast<IInteractionInterface>(OtherActor);

		if (Target && Target->CanInteract(this))
		{
			Target->Interact(this);
		}
	}
}


void ATestActor::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("I'm constructing it"));
}



void ATestActor::BeginPlay()
{
	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("I am playing it"));
}


void ATestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATestActor::Greeting()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Hello there!"));
}

