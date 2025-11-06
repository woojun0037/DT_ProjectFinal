#include "Manager/DTFUIManager.h"
#include "Blueprint/UserWidget.h"

void UDTFUIManager::CreatePartsSelection(UWorld* World)
{
	if (World == nullptr || PartSelectionWidgetClass == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("# Error CreatePartsSelection"));
		return;
	}

	PartSelectionWidget = CreateWidget<UUserWidget>(World, PartSelectionWidgetClass);
	if (PartSelectionWidget)
	{
		PartSelectionWidget->AddToViewport();
		if (SpawnManager == nullptr)
		{
			TArray<AActor*> FoundActors;
			UGameplayStatics::GetAllActorsOfClass(World, ADTFSpawnManager::StaticClass(), FoundActors);
			if (FoundActors.Num() > 0)
			{
				SpawnManager = Cast<ADTFSpawnManager>(FoundActors[0]);
				UE_LOG(LogTemp, Log, TEXT("#Cast : SpawnManager Found for UIManager"));

				OnLineSelected.AddDynamic(SpawnManager, &ADTFSpawnManager::SpawnCarParts);
			}
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("#Cast : Faild To Create Widget"));
	}
}

void UDTFUIManager::SetSpawnManager(ADTFSpawnManager* InSpawnManager)
{
	SpawnManager = InSpawnManager;

	if (SpawnManager)
	{
		OnLineSelected.AddDynamic(SpawnManager, &ADTFSpawnManager::SpawnCarParts);
		UE_LOG(LogTemp, Log, TEXT("#Set SpanManager : SpawnManager set in UIManager"));
	}
}

void UDTFUIManager::OnLineButtonClicked(FName LineName)
{
	UE_LOG(LogTemp, Log, TEXT("Line Button clicked : %s"), *LineName.ToString());

	if (OnLineSelected.IsBound())
	{
		OnLineSelected.Broadcast(LineName);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("#OnLine Button Clicked : Delegate Not bound, Calling SpawnManager directly"));
	}
}

