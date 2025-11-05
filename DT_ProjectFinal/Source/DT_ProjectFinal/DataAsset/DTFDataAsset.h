#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DTFDataAsset.generated.h"

USTRUCT(BlueprintType)
struct FPartsInfo
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Parts Name")
	FName PartsName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Parts Mesh")
	UStaticMesh* PartsMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parts Name Pattern")
	FString PartsNamePattern;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parts Offset")
	FTransform PartsOffsetTransform = FTransform::Identity;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SpawnTransform")
	FTransform Transform;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Parts Mirroring")
	bool bMirrorX = false;

	FPartsInfo():PartsName(),PartsMesh(), PartsNamePattern(TEXT("")), 
				 PartsOffsetTransform(FTransform::Identity), bMirrorX(false){}

	bool bIsFrame(const FName& FrameName) const
	{
		return PartsName == FrameName;
	}

	int32 GetSpawnCount(const FName& FrameName) const
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

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Parts SoftObejct Info")
	TSoftClassPtr<AActor> PartsActorClass;
};
