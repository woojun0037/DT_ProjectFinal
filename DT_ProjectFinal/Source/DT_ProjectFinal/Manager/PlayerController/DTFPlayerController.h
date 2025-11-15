#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "DTFPlayerController.generated.h"

class UDTFLineOrderWidget;
class UDTFGameInstance;

UCLASS()
class DT_PROJECTFINAL_API ADTFPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
};
