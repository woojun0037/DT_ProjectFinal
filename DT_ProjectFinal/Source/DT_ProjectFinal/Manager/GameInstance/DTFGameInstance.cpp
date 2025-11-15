// Fill out your copyright notice in the Description page of Project Settings.
#include "Manager/GameInstance/DTFGameInstance.h"
#include "Manager/UI/DTFUIManager.h"

UDTFGameInstance::UDTFGameInstance() : UIManager(nullptr), TotalCompletedCars(0)
{
    LineProductionCount.Empty();
}

void UDTFGameInstance::Init()
{
    Super::Init();

    UE_LOG(LogTemp, Log, TEXT("##GameInstance::Init Called"));

    if (!UIManager)
    {
        UIManager = NewObject<UDTFUIManager>(this);
        if (UIManager)
        {
            UE_LOG(LogTemp, Log, TEXT("##GameInstance : UIManager created"));
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("##GameInstance : Failed to created UIManager"));
        }
    }
}

void UDTFGameInstance::AddComponentedCars(int32 LineIndex, int32 Count)
{

}

void UDTFGameInstance::AddPartUsage(const FString& PartName, int32 count)
{

}
