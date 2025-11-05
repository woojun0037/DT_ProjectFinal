// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DTFCarParts.generated.h"

class UStaticMeshComponent;

//파츠 별로 부착되는 위치, 회전
USTRUCT(BlueprintType)
struct FAttachmentTransform
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform Transform;
};


UCLASS()
class DT_PROJECTFINAL_API ADTFCarParts : public AActor
{
	GENERATED_BODY()
	
public:	
	ADTFCarParts();

protected:
	virtual void BeginPlay() override;


public:	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* PartsMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "State")
	bool bIsAssemble;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Parts Name")
	FString PartsName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly,Category = "Assembly")
	FAttachmentTransform AttachTransform;

	void AttachPartToFrame();
};
