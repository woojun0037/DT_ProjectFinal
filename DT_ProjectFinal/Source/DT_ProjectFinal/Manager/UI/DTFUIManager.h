#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DTFUIManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPartsSpawned);

UCLASS(Blueprintable, BlueprintType)
class DT_PROJECTFINAL_API UDTFUIManager : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnPartsSpawned OnPartsSpawned;

	UFUNCTION()
	void BroadcastPartsSpawned()
	{
		OnPartsSpawned.Broadcast();
	}
};
