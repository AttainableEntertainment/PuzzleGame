// Copyright made by Jon Reis 2021

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TriggerVolume.h"
#include "DoorComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDING_ESCAPE_API UDoorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDoorComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void OpenDoor(float DeltaTime);
	void CloseDoor(float DeltaTime);

private:
	
	float CurrentYaw = 0.f;
	float InitialYaw = 0.f;

	float GameTime = 0.f;

	UPROPERTY(EditAnywhere)
	float OpenAngle = 90.f;
	UPROPERTY(EditAnywhere)
	float DoorCloseDelay = 0.5f;
	UPROPERTY(EditAnywhere)
	float DoorOpenSpeed = 2.0f;
	UPROPERTY(EditAnywhere)
	float DoorCloseSpeed = 5.0f;

	

	UPROPERTY(EditAnywhere)
	ATriggerVolume* TriggerVolume;

	//The actor to trigger, if none is set defaults to player controlled pawn
	UPROPERTY(EditAnywhere)
	AActor* ActorToTrigger;
		
};
