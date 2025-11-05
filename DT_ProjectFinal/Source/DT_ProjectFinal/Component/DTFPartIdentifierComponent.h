#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DTFPartIdentifierComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DT_PROJECTFINAL_API UDTFPartIdentifierComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UDTFPartIdentifierComponent();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parts Info")
	FName PartsType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parts Info")
	FName PartsName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parts Info")
	FString PartsNamePattern;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parts Info")
	FTransform Offset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parts Info")
	bool bIsMirrored = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parts Info")
	bool bIsFrame = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parts Info")
	FVector CustomOffset = FVector::ZeroVector;
};
