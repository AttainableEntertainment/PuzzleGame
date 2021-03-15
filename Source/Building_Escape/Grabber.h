// Copyright made by Jon Reis 2021

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "Components/InputComponent.h"
#include "Grabber.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDING_ESCAPE_API UGrabber : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGrabber();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere)
	float Reach = 150.f;
	
	UPhysicsHandleComponent* PhysHandler =nullptr;
	UInputComponent* InputComponent = nullptr;
		
	void Grab();
	void Release();
	void FindPhysicsHandler();
	void SetInputComponent();
	FHitResult LineTrace() const;
	FVector GetActorLocation() const;
	FRotator GetActorRotation() const;
	FVector GetActorReachLocation() const;
};
