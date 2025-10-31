﻿#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "DTFGameInstance.generated.h"

UCLASS()
class DT_PROJECTFINAL_API UDTFGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UDTFGameInstance();

	//생산된 자동차 수량 추가 함수
	UFUNCTION(BlueprintCallable)
	void AddComponentedCars(int32 LineIndex, int32 Count = 1);

	//부품 사용 기록 추가 함수
	UFUNCTION(BlueprintCallable)
	void AddPartUsage(const FString& PartName, int32 count = 1);

public:
	// 총 완성 자동차 개수
	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly)
	int32 TotalCompletedCars;

	//라인별 누적 생산량
	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly)
	TArray<int32> LineProductionCount;
};
