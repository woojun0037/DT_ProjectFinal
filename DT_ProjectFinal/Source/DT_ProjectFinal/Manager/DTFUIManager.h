#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DTFUIManager.generated.h"

UCLASS()
class DT_PROJECTFINAL_API UDTFUIManager : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<class UUserWidget> PartSlectionWidgetClass;

	UPROPERTY()
	UUserWidget* PartSelectionWidget;

	void CreatePartsSelection(UWorld* World);
};
