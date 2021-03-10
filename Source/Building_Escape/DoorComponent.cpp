// Copyright made by Jon Reis 2021


#include "DoorComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"

// Sets default values for this component's properties
UDoorComponent::UDoorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UDoorComponent::BeginPlay()
{
	Super::BeginPlay();

	

	InitialYaw = GetOwner()->GetActorRotation().Yaw;
	OpenAngle = InitialYaw + OpenAngle;
	CurrentYaw = InitialYaw;

	if (!TriggerVolume)
	{
		UE_LOG(LogTemp, Error, TEXT("%s actor has open door component with no trigger volume set"), *GetOwner()->GetName());
	}
	
	if (!ActorToTrigger)
	{
		ActorToTrigger = GetWorld()->GetFirstPlayerController()->GetPawn();
	}
}


// Called every frame
void UDoorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!ActorToTrigger)
	{
		ActorToTrigger = GetWorld()->GetFirstPlayerController()->GetPawn();
	}

	//UE_LOG(LogTemp, Warning, TEXT("Float: %f"), GetOwner()->GetActorRotation().Yaw);
	if (TriggerVolume && TriggerVolume->IsOverlappingActor(ActorToTrigger))
	{
		OpenDoor(DeltaTime);
		GameTime=GetWorld()->GetTimeSeconds();
	}
	else if (TriggerVolume && GameTime+DoorCloseDelay<GetWorld()->GetTimeSeconds())
	{
		CloseDoor(DeltaTime);
		//UE_LOG(LogTemp, Warning, TEXT("closing door, CurrentYaw: %f"), CurrentYaw);
	}
	
	
}
void UDoorComponent::OpenDoor(float DeltaTime)
{
	CurrentYaw = FMath::FInterpTo(CurrentYaw, OpenAngle, DeltaTime, DoorOpenSpeed);
	GetOwner()->SetActorRotation(FRotator(0, CurrentYaw, 0));
}
void UDoorComponent::CloseDoor(float DeltaTime)
{
	CurrentYaw = FMath::FInterpTo(CurrentYaw, InitialYaw, DeltaTime, DoorCloseSpeed);
	GetOwner()->SetActorRotation(FRotator(0, CurrentYaw, 0));
}
