#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Manager/UI/DTFUIManager.h"
#include "DTFLineOrderWidget.generated.h"

class UDTFGameInstance;

UCLASS()
class DT_PROJECTFINAL_API UDTFLineOrderWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget))
	UButton* LineA_Btn;

	UPROPERTY(meta = (BindWidget))
	UButton* LineB_Btn;

	UPROPERTY(meta = (BindWidget))
	UButton* LineC_Btn;

};
