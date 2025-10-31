#include "Manager/DTFUIManager.h"
#include "Blueprint/UserWidget.h"

void UDTFUIManager::CreatePartsSelection(UWorld* World)
{
	if (!World || !PartSlectionWidgetClass)
	{
		return;
	}

	PartSelectionWidget = CreateWidget<UUserWidget>(World, PartSlectionWidgetClass);
	if (PartSelectionWidget)
	{
		PartSelectionWidget->AddToViewport();
	}
}