#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DTFDeliveryRobot.generated.h"

class UStaticMeshComponent;
class USceneComponent;

class UDTFUIManager;
class UDTFGameInstance;
class AAIController;

struct FAIRequestID;
struct FPathFollowingResult;

UENUM(BlueprintType)
enum class ERobotState : uint8
{
    Idle             UMETA(DisplayName = "IDLE"),
    MovingToPickUp   UMETA(DisplayName = "MovingToPickUp"),
    PickingUp        UMETA(DisplayName = "PickingUp"),
    MovingToDelivery UMETA(DisplayName = "MovingToDelivery"),
    Dropping         UMETA(DisplayName = "Dropping"),
    Error            UMETA(DisplayName = "Error")
};

UCLASS()
class DT_PROJECTFINAL_API ADTFDeliveryRobot : public ACharacter
{
    GENERATED_BODY()
    
public:
    ADTFDeliveryRobot();

    // Public API
    virtual void Tick(float DeltaTime) override;

    void InitializeRobot(AActor* InPartsSpawnPoint, AActor* InAssignedSpawnPoint, FName InLineName);

    UFUNCTION(BlueprintCallable, Category = "State Machine")
    void SetState(ERobotState NewState);

    FORCEINLINE void SetRobotLineName(FName InLineName) { RobotLineName = InLineName; }

    UFUNCTION(BlueprintCallable, Category = "Delivery")
    void StartDelivery();

    void MoveToLocationAsync(const FVector& InTargetLocation);

    void PickupParts(AActor* Parts);
    void DropParts();

    void BindToUIManager(UDTFUIManager* UIManager);

    void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result);

    UFUNCTION()
    void OnPartsSpawnedAtSpawnPoint(FName LineName);

    // 블루프린트 이벤트용 함수
    UFUNCTION(BlueprintImplementableEvent, Category = "Delivery")
    void OnPickupComplete();

    UFUNCTION(BlueprintImplementableEvent, Category = "Delivery")
    void OnDropComplete();

protected:
    virtual void BeginPlay() override;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
    UStaticMeshComponent* RobotMesh;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
    USceneComponent* AttachPoint;

private:
    // 이 로봇이 담당하는 라인 이름 (LineA / LineB / LineC)
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Delivery", meta = (AllowPrivateAccess = "true"))
    FName RobotLineName = NAME_None;

    // DeliveryState
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Delivery", meta = (AllowPrivateAccess = "true"))
    AActor* PartsSpawnPoint = nullptr;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Delivery", meta = (AllowPrivateAccess = "true"))
    AActor* AssignedSpawnPoint = nullptr;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Delivery", meta = (AllowPrivateAccess = "true"))
    ERobotState CurrentState = ERobotState::Idle;

    // 현재 들고 있는 파츠
    UPROPERTY()
    AActor* CurrentParts = nullptr;

    UPROPERTY(EditAnywhere, Category = "Delivery")
    TArray<AActor*> DeliveryTargets;

    int32 CurrentLineIndex = 0;

    bool bIsDelivering = false;

    TSubclassOf<AAIController> AIControllerClass;
};