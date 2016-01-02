// UE4 C++ Quick Start Tutorials - copyright 2015-2016 Sébastien Rombauts - distributed under the MIT License

#include "UE4QuickStart.h"
#include "Countdown.h"


// Sets default values
ACountdown::ACountdown()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	UE_LOG(QuickStart, Log, TEXT("ACountdown::ACountdown()"));
}

// Called when the game starts or when spawned
void ACountdown::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(QuickStart, Log, TEXT("ACountdown::BeginPlay()"));
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, "ACountdown::BeginPlay()");
}

// Called every frame
void ACountdown::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

