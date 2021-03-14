// Copyright made by Jon Reis 2021

#include "DrawDebugHelpers.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"
#include "Grabber.h"


#define OUT
// Sets default values for this component's properties
UGrabber::UGrabber()
{
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();

	FindPhysicsHandler();
	SetInputComponent();

}
void UGrabber::SetInputComponent()
{
	InputComponent = GetOwner()->FindComponentByClass<UInputComponent>();
	if (InputComponent)
	{
		//UE_LOG(LogTemp, Warning, TEXT("input component successfully found"));
		InputComponent->BindAction("Grab",IE_Pressed, this, &UGrabber::Grab);
		InputComponent->BindAction("Grab", IE_Released, this, &UGrabber::Release);
	}
}
void UGrabber::FindPhysicsHandler()
{
	PhysHandler = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
	if (PhysHandler)
	{
		//has been found, continue 
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("No physics handle on actor :%s"), *GetOwner()->GetName());
	}
}
void UGrabber::Grab()
{
	FHitResult Hit=LineTrace();
	UPrimitiveComponent* ComponentToGrab=Hit.GetComponent();
	if (Hit.GetActor())
	{
		UE_LOG(LogTemp, Warning, TEXT("Actor name: %s"), *Hit.GetActor()->GetFName().ToString());
		PhysHandler->GrabComponentAtLocation(
			ComponentToGrab,
			NAME_None,
			Hit.TraceEnd
		);
	}
}
void UGrabber::Release()
{
	if (PhysHandler->GrabbedComponent)
	{
		PhysHandler->ReleaseComponent();
	}
	UE_LOG(LogTemp, Warning, TEXT("Grab released"));
}
FHitResult UGrabber::LineTrace()
{
	FVector playerLocation;
	FRotator playerRotation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(
		OUT playerLocation,
		OUT playerRotation
	);
	FVector endLine = playerLocation + playerRotation.Vector() * Reach;
	FHitResult Hit;
	GetWorld()->LineTraceSingleByObjectType(
		Hit,
		playerLocation,
		endLine,
		FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody),
		FCollisionQueryParams(FName(TEXT("")), false, GetOwner())
	);
	return Hit;
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
	FVector endLine = playerLocation + playerRotation.Vector() * Reach;
	if (PhysHandler->GrabbedComponent)
	{
		PhysHandler->SetTargetLocation(endLine);
	}
	
}

