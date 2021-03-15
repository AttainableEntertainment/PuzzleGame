// Copyright made by Jon Reis 2021

#include "Grabber.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"

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
		InputComponent->BindAction("Grab",IE_Pressed, this, &UGrabber::Grab);
		InputComponent->BindAction("Grab", IE_Released, this, &UGrabber::Release);
	}
}
void UGrabber::FindPhysicsHandler()
{
	PhysHandler = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
	if (PhysHandler==nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("No physics handle on actor :%s"), *GetOwner()->GetName());
	}
}
void UGrabber::Grab()
{
	FHitResult Hit=LineTrace();
	UPrimitiveComponent* ComponentToGrab=Hit.GetComponent();
}
void UGrabber::Release()
{
		PhysHandler->ReleaseComponent();
}
FHitResult UGrabber::LineTrace() const
{
	FHitResult Hit;

	GetWorld()->LineTraceSingleByObjectType(
		OUT Hit,
		GetActorLocation(),
		GetActorReachLocation(),
		FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody),
		FCollisionQueryParams(FName(TEXT("")), false, GetOwner())
	);
	return Hit;
}
FVector UGrabber::GetActorLocation() const  
{
	FVector  Vector;

	Vector = GetOwner()->GetActorLocation();
	return Vector;
}
FRotator UGrabber::GetActorRotation() const
{
	FRotator Rotation;
	FVector  Vector;

	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(Vector, OUT Rotation);
	return Rotation;
}
FVector UGrabber::GetActorReachLocation() const
{
	return GetActorLocation() + GetActorRotation().Vector() * Reach;
}
// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (PhysHandler->GrabbedComponent)
	{
		PhysHandler->SetTargetLocation(GetActorReachLocation());
	}
}

