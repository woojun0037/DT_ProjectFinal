#include "Manager/PlayerController/DTFPlayerController.h"
#include "Manager/GameInstance/DTFGameInstance.h"

#include "UI/DTFLineOrderWidget.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"

void ADTFPlayerController::BeginPlay()
{
    Super::BeginPlay();

    if (!IsLocalController()) 
        return;

    UDTFGameInstance* DTFGameInstance = Cast<UDTFGameInstance>(GetGameInstance());
}
