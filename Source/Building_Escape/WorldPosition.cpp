// Copyright made by Jon Reis 2021


#include "WorldPosition.h"
#include "GameFramework/Actor.h"
// Sets default values for this component's properties
UWorldPosition::UWorldPosition()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWorldPosition::BeginPlay()
{
	Super::BeginPlay();
	
	FVector Vec =GetOwner()->GetActorLocation();

	UE_LOG(LogTemp, Warning, TEXT("X:%f Y:%f Z:%f"), Vec.X, Vec.Y, Vec.Z);
	
	
	
}


// Called every frame
void UWorldPosition::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

