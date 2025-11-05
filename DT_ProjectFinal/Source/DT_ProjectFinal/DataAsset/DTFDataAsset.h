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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parts Offset")
	FString PartsNamePattern;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parts Offset")
	float OffsetX = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parts Offset")
	float OffsetY = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parts Offset")
	float OffsetZ = 0.f;

	FPartsInfo() : PartsNamePattern(TEXT("")), OffsetX(0.f), OffsetY(0.f), OffsetZ(0.f)
	{}

	FPartsInfo(const FString& Pattern, float X, float Y = 0.f, float Z = 0.f)
		: PartsNamePattern(Pattern), OffsetX(X), OffsetY(Y), OffsetZ(Z) 
	{}

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SpawnTransfrom")
	FTransform transform;
	
	bool bMirrorX = false;
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
