// Copyright made by Jon Reis 2021

#include "DrawDebugHelpers.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"

#include "Grabber.h"


#define OUT
// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();



}

// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	FVector playerLocation;
	FRotator playerRotation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(
		OUT playerLocation, 
		OUT playerRotation
	);

	UE_LOG(LogTemp, Warning, TEXT("location:%s  rotation:%s"), *playerLocation.ToString(), *playerRotation.Vector().ToString());


	FVector endLine = playerLocation+playerRotation.Vector()*Reach;

	DrawDebugLine(
		GetWorld(),
		playerLocation,
		endLine,
		FColor(255, 0, 0),
		false,
		0.f,
		0,
		5
	);

	FHitResult Hit;

	GetWorld()->LineTraceSingleByObjectType(
		Hit,
		playerLocation,
		endLine,
		FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody),
		FCollisionQueryParams(FName(TEXT("")), false, GetOwner())
	);

	
	if (Hit.GetActor())
	{
		UE_LOG(LogTemp, Warning, TEXT("Actor name: %s"), *Hit.GetActor()->GetFName().ToString());
	}
	
}

