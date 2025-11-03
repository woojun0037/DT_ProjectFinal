#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DataAsset/DTFDataAsset.h"
#include "Component/DTFPartIdentifierComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DTFSpawnManager.generated.h"

USTRUCT(BlueprintType)
struct FPartActorArray
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere)
	TArray<TWeakObjectPtr<AActor>> Actors;
};

UCLASS()
class DT_PROJECTFINAL_API ADTFSpawnManager : public AActor
{
	GENERATED_BODY() 
	
public:	
	ADTFSpawnManager();
protected:

	virtual void BeginPlay() override;
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpawnData")
	UDTFDataAsset* CarPartsDataAsset;

	UPROPERTY(VisibleInstanceOnly, Category = "CarFrame Spawn Points")
	TArray<AActor*> FrameSpawnPoints;

	UPROPERTY(VisibleInstanceOnly, Category = "CarParts Spawn Points")
	TArray<AActor*> PartsSpawnPoints;

	UPROPERTY(EditAnywhere, Category = "Spawn")
	FName SelectedLine = "LineA";

	UPROPERTY(EditAnywhere, Category = "Part Spawn Offset Distance")
	FVector OffsetDistance;

	//스폰 된 액터를 관리 하기위해서
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TMap<FName, FPartActorArray> PartsMap;
	
	UFUNCTION(BlueprintCallable, Category = "PartsClass")
	TSubclassOf <AActor> GetPartActorClass();

	UFUNCTION(BlueprintCallable, Category = "Spawn")
	void SpawnCarParts();

private:
	void InitialPosition();
	void ParseSpawnPointName(const FString& Name, FString& OutLine, int32& OutIndex);

	UClass* FrameClass;
	UClass* PartClass;

	int32 GetLineIndexByName(FName LineName)const;
};
