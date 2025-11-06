#include "CarParts/DTFCarParts.h"
#include "Components/StaticMeshComponent.h"

ADTFCarParts::ADTFCarParts()
{
	PrimaryActorTick.bCanEverTick = false;
	PartsMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	RootComponent = PartsMesh;
}

void ADTFCarParts::BeginPlay()
{
	Super::BeginPlay();
	
}

void ADTFCarParts::AttachPartToFrame()
{

}