#include "Manager/DTFGameModeBase.h"
#include "Blueprint/UserWidget.h"

ADTFGameModeBase::ADTFGameModeBase()
{

}

void ADTFGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	if(DTFUiClass)
	{
		DTFUi = CreateWidget<UUserWidget>(GetWorld(), DTFUiClass);
		if (DTFUi)
		{
			DTFUi->AddToViewport();
		}
	}
}
 