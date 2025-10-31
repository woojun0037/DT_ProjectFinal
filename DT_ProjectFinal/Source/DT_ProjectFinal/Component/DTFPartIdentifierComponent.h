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

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Parts Info")
	FName PartType;
};
