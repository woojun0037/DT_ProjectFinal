#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DataAsset/DTFDataAsset.h"
#include "DTFSpawnManager.generated.h"

class UDTFUIManager;
class UDTFGameInstance;
class ADTFDeliveryRobot;

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

	UPROPERTY(EditDefaultsOnly, Category = "Manager")
	UDTFUIManager* UIManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Data")
	UDTFDataAsset* CarPartsDataAsset;

	UPROPERTY(VisibleInstanceOnly, Category = "Spawn|Frame")
	TArray<AActor*> FrameSpawnPoints;

	UPROPERTY(VisibleInstanceOnly, Category = "Spawn|Parts")
	TArray<AActor*> PartsSpawnPoints;
 
	UPROPERTY(EditAnywhere, Category = "Spawn|Frame")
	FName FramePartsName = TEXT("SM_Car_Body");

	UPROPERTY(EditAnywhere, Category = "Delivery|Bots")
	TArray<ADTFDeliveryRobot*> DeliveryRoBots;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawn|Parts")
	TMap<FName, FPartActorArray> PartsMap;

public:

	UFUNCTION(BlueprintCallable, Category = "Spawn|Parts")
	void SpawnCarParts(FName LineName);

	UFUNCTION(BlueprintCallable, Category = "Delivery|Bots")
	void AssignSpawnPointsToBots();
	
	UFUNCTION(BlueprintCallable, Category = "Spawn|Parts")
	TSubclassOf <AActor> GetPartsActorClass();

private:
	static constexpr float PARTS_OFFSET_DISTANCE = 50.f;

	void InitialPosition();

	void ParseSpawnPointName(const FString& Name, FString& OutLine, int32& OutIndex);

	FTransform CalculateSpawnTransform(const FTransform& BaseTransform, const FPartsInfo& PartsInfo, int32 Index, bool bIsFrame);
	FTransform CreateMirroedTransform (const FTransform& BaseTransform, bool bMirrorX);
	FTransform GetOffsetTransform     (const FTransform& BaseTransform, const FPartsInfo& PartsInfo, int32 Index, float Offset);
	
	UPROPERTY()
	UClass* FrameClass = nullptr;

	UPROPERTY()
	UClass* PartsClass = nullptr;

	int32 GetLineIndexByName(FName LineName)const;

	bool bSpawnAssignedToBots = false;

	UPROPERTY()
	UDTFUIManager* CachedUIManager = nullptr;
};
