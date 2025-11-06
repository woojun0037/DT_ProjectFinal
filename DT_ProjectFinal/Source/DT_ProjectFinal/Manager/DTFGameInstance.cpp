// Fill out your copyright notice in the Description page of Project Settings.

#include "Manager/DTFGameInstance.h"
#include "DTFGameInstance.h"

UDTFGameInstance::UDTFGameInstance()
{
	
}

void UDTFGameInstance::Init()
{
	Super::Init();
	if (UIManager == nullptr)
	{
		UIManager = NewObject<UDTFUIManager>(this);
	}

	if (LineOrderWidgetClass == nullptr)
	{
		static ConstructorHelpers::FClassFinder<UUserWidget> WidgetClass(TEXT("/Game/BP/UI/WBP_Line/WBP_LineOrder.WBP_LineOrder_C"));
		if (WidgetClass.Class)
		{
			LineOrderWidgetClass = WidgetClass.Class;
		}
	}

	if (UIManager)
	{
		UIManager->PartSelectionWidgetClass = LineOrderWidgetClass;
	}
}

void UDTFGameInstance::AddComponentedCars(int32 LineIndex, int32 Count)
{

}

void UDTFGameInstance::AddPartUsage(const FString& PartName, int32 count)
{

}
