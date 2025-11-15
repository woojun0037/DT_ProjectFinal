#include "Spline/DTFDeliveryPath.h"
#include "Components/SplineComponent.h"

ADTFDeliveryPath::ADTFDeliveryPath()
{
	PrimaryActorTick.bCanEverTick = true;

	PathSpline = CreateDefaultSubobject<USplineComponent>(TEXT("PathSpline"));
	RootComponent = PathSpline;
}

float ADTFDeliveryPath::GetPathLength() const
{
	return PathSpline ? PathSpline->GetSplineLength() : 0.f;
}

FVector ADTFDeliveryPath::GetLocationAtDistance(float Distance) const
{
	if (!PathSpline) return FVector::ZeroVector;

	return PathSpline->GetLocationAtDistanceAlongSpline(Distance, ESplineCoordinateSpace::World);
}

FRotator ADTFDeliveryPath::GetRotationAtDistance(float Distance) const
{
	if (!PathSpline) return FRotator::ZeroRotator;

	return PathSpline->GetRotationAtDistanceAlongSpline(Distance, ESplineCoordinateSpace::World);
}


