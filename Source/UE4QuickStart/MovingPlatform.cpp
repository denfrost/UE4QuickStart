// UE4 C++ Quick Start Tutorials - copyright 2015-2016 Sébastien Rombauts - distributed under the MIT License

#include "UE4QuickStart.h"
#include "MovingPlatform.h"


// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	StartLocation = GetActorLocation();

	UE_LOG(QuickStart, Log, TEXT("AMovingPlatform::BeginPlay()"));
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, "AMovingPlatform::BeginPlay()");
}

// Called every frame
void AMovingPlatform::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

	const float InterpSpeed = 1.0f;
	const FVector CurrentLocation = GetActorLocation();
	const FVector InterpLocation = FMath::VInterpTo(CurrentLocation, TargetLocation, DeltaTime, InterpSpeed);
	if (!InterpLocation.Equals(CurrentLocation))
	{
		SetActorLocation(InterpLocation);
	}
}

