#include "Component/DTFPartIdentifierComponent.h"

UDTFPartIdentifierComponent::UDTFPartIdentifierComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UDTFPartIdentifierComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UDTFPartIdentifierComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

