#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DTFUIManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPartsSpawned, FName, LineName);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpawned, FName, LineName);

UCLASS(Blueprintable, BlueprintType)
class DT_PROJECTFINAL_API UDTFUIManager : public UObject
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintAssignable, Category = "Events")
    FOnPartsSpawned OnPartsSpawned;   // "라인 X에서 파츠 스폰 완료"

    UPROPERTY(BlueprintAssignable, Category = "Events")
    FOnSpawned OnSpawned;             // "라인 X에서 스폰 요청 (버튼 클릭)"

    UFUNCTION(BlueprintCallable, Category = "Events")
    void RequestSpawn(FName LineName) // WBP에서 이거 호출
    {
        OnSpawned.Broadcast(LineName);
    }

    UFUNCTION(BlueprintCallable, Category = "Events")
    void BroadcastPartsSpawned(FName LineName) // 스폰 끝났을 때 매니저가 호출
    {
        OnPartsSpawned.Broadcast(LineName);
    }
};
