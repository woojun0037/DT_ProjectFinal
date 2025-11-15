#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DTFGameModeBase.generated.h"

UCLASS()
class DT_PROJECTFINAL_API ADTFGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	ADTFGameModeBase();

protected:
	virtual void BeginPlay()override;
public:

private:
	UPROPERTY()
	UUserWidget* DTFUIManager;
};
