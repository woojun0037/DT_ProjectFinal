// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DTFDataAsset.generated.h"

USTRUCT(BlueprintType)
struct FPartsInfo
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Parts Name")
	FString PartsName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Parts Mesh")
	UStaticMesh* PartsMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawn Location")
	FVector SpawnLocation;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawn Rotator")
	FRotator SPawnRotation;
	
	bool bIsFrame(const FString& FrameName) const
	{
		return PartsName == FrameName;
	}

	int32 GetSpawnCount(const FString& FrameName) const
	{
		return bIsFrame(FrameName) ? 1 : 2;
	}
};

UCLASS(BlueprintType)
class DT_PROJECTFINAL_API UDTFDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Parts")
	TArray<FPartsInfo> Parts;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Part SoftObejct Info")
	TSoftClassPtr<AActor> PartActorClass;
};
