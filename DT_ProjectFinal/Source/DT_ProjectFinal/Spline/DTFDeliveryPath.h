#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DTFDeliveryPath.generated.h"

class USplineComponent;
USTRUCT(BlueprintType)
struct FDeliveryStopPoint
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stop")
	float Distance = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stop")
	FName StopName = NAME_None;
};


UCLASS()
class DT_PROJECTFINAL_API ADTFDeliveryPath : public AActor
{
	GENERATED_BODY()
	
public:	
	ADTFDeliveryPath();

	float GetPathLength() const;

	FVector  GetLocationAtDistance(float Distance) const;
	FRotator GetRotationAtDistance(float Distance) const;

	USplineComponent* GetSpline() const { return PathSpline; }

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Path")
	USplineComponent* PathSpline;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Path")
	TArray<FDeliveryStopPoint> Stop;
};
