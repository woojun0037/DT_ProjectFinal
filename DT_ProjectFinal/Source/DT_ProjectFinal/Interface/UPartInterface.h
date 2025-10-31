#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UPartInterface.generated.h"

UINTERFACE(MinimalAPI)
class UUPartInterface : public UInterface
{
	GENERATED_BODY()
};

class DT_PROJECTFINAL_API IUPartInterface
{
	GENERATED_BODY()

public:
	virtual FName GetPartType() const = 0;
};
