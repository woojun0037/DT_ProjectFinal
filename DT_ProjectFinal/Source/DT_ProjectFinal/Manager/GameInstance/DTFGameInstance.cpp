// Fill out your copyright notice in the Description page of Project Settings.

#include "Manager/GameInstance/DTFGameInstance.h"
#include "UI/DTFLineOrderWidget.h"

UDTFGameInstance::UDTFGameInstance() : UIManager(nullptr), TotalCompletedCars(0)
{
    LineProductionCount.Empty();
}

void UDTFGameInstance::Init()
{
    Super::Init();

    if (UIManager == nullptr)
    {
        UIManager = NewObject<UDTFUIManager>(this, UDTFUIManager::StaticClass());
        if (UIManager)
        {
            UE_LOG(LogTemp, Log, TEXT("###UIManager initialized in GameInstance"));
        }
    }
}

void UDTFGameInstance::AddComponentedCars(int32 LineIndex, int32 Count)
{

}

void UDTFGameInstance::AddPartUsage(const FString& PartName, int32 count)
{

}
