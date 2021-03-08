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
	UPROPERTY(EditAnywhere)
	float TargetYaw = 90.f;
	float CurrentYaw = 0.f;
	float InitialYaw = 0.f;

	float Delay = 0.5f;
	float GameTime = 0.f;

	UPROPERTY(EditAnywhere)
	ATriggerVolume* TriggerVolume;

	UPROPERTY(EditAnywhere)
	AActor* ActorToTrigger;
		
};
