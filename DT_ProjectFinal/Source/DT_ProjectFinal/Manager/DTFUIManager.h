#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/GameplayStatics.h"
#include "DTFSpawnManager.h"
#include "DTFUIManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLineSelectedDelegate, FName, LineName);

UCLASS(Blueprintable, BlueprintType)
class DT_PROJECTFINAL_API UDTFUIManager : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widget")
	TSubclassOf<class UUserWidget> PartSelectionWidgetClass;

	UPROPERTY()
	UUserWidget* PartSelectionWidget;

	UPROPERTY(BlueprintReadWrite, Category = "Spawn Manager")
	class ADTFSpawnManager* SpawnManager;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnLineSelectedDelegate OnLineSelected; 

	UFUNCTION(BlueprintCallable, Category = "UI")
	void CreatePartsSelection(UWorld* World);

	UFUNCTION(BlueprintCallable, Category = "UI")
	void SetSpawnManager(ADTFSpawnManager * InSpawnManager);

	UFUNCTION(BlueprintCallable, Category = "UI")
	void OnLineButtonClicked(FName LineName);
};
