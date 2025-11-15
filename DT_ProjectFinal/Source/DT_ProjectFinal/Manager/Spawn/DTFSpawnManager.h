#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Manager/UI/DTFUIManager.h"
#include "DataAsset/DTFDataAsset.h"
#include "Component/DTFPartIdentifierComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DTFSpawnManager.generated.h"

class UDTFUIManager;
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

public:
	UPROPERTY(EditDefaultsOnly, Category = "Manager")
	UDTFUIManager* UIManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpawnData")
	UDTFDataAsset* CarPartsDataAsset;

	UPROPERTY(VisibleInstanceOnly, Category = "CarFrame Spawn Points")
	TArray<AActor*> FrameSpawnPoints;

	UPROPERTY(VisibleInstanceOnly, Category = "CarParts Spawn Points")
	TArray<AActor*> PartsSpawnPoints;
 
	UPROPERTY(EditAnywhere, Category = "FrameParts")
	FName FramePartsName = TEXT("SM_Car_Body");

	UPROPERTY(EditAnywhere, Category = "DeliveryBots")
	TArray<ADTFDeliveryRobot*> DeliveryRoBots;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TMap<FName, FPartActorArray> PartsMap;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnPartsSpawned OnPartsSpawned;

	UFUNCTION()
	void NotifyPartsSpawned();

	UFUNCTION()
	void HandlePartsSpawned();

	UFUNCTION()
	void PartsSpawnComplete();

	UFUNCTION(BlueprintCallable, Category = "PartsClass")
	TSubclassOf <AActor> GetPartsActorClass();

	UFUNCTION(BlueprintCallable)
	void SpawnCarParts(FName LineName);

	UFUNCTION()
	void AssignSpawnPointsToBots();

private:
	static constexpr float PARTS_OFFSET_DISTANCE = 50.f;

	void InitialPosition();
	void ParseSpawnPointName(const FString& Name, FString& OutLine, int32& OutIndex);

	FTransform CarculateSpawnTransform(const FTransform& BaseTransform, const FPartsInfo& PartsInfo, int32 Index, bool bIsFrame);
	FTransform CreateMirroedTransform (const FTransform& BaseTransform, bool bMirrorX);
	FTransform GetOffsetTransform     (const FTransform& BaseTransform, const FPartsInfo& PartsInfo, int32 Index, float Offset);
	
	UClass* FrameClass;
	UClass* PartsClass;

	int32 GetLineIndexByName(FName LineName)const;
	bool bSpawnAssignedToBots = false;
};
