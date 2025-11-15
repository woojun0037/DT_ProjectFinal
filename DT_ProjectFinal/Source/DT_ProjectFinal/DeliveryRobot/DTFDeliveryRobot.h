#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "DTFDeliveryRobot.generated.h"

class UCapsuleComponent;
class UStaticMeshComponent;
class USceneComponent;
class UFloatingPawnMovement;

class UDTFUIManager;
class UDTFGameInstance;
class AAIController;

struct FAIRequestID;
struct FPathFollowingResult;

UENUM(BlueprintType)
enum class ERobotState : uint8
{
	Idle			 UMETA(DisplayName = "IDLE"),
	MovingToPickUp   UMETA(DisplayName = "MovingToPick Up"),
	PickingUp		 UMETA(DisplayName = "Picking Up"),
	MovingToDelivery UMETA(DisplayName = "Moving To Delivery"),
	Dropping		 UMETA(DisplayName = "Dropping"),
	Error		     UMETA(DisplayName = "Error")
};

UCLASS()
class DT_PROJECTFINAL_API ADTFDeliveryRobot : public APawn
{
	GENERATED_BODY()
	
public:	
	ADTFDeliveryRobot();

	//Public API
	virtual void Tick(float DeltaTime) override;

	void InitializeRobot(AActor* InPartsSpawnPoint, AActor* InAssignedSpawnPoint);

	UFUNCTION(BlueprintCallable, Category = "State Machine")
	void SetState(ERobotState NewState);

	UFUNCTION(BlueprintCallable, Category = "Delivery")
	void StartDelivery();
	
	void MoveToLocationAsync(const FVector& InTargetLocation);

	void PickupParts(AActor* Parts);
	void DropParts();

	void BindToUIManager(class UDTFUIManager* UIManager);

	void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result);

	UFUNCTION()
	void OnPartsSpawnedAtSpawnPoint();

	// 블루프린트 이벤트용 함수 선언
	UFUNCTION(BlueprintImplementableEvent, Category = "Delivery")
	void OnPickupComplete();

	UFUNCTION(BlueprintImplementableEvent, Category = "Delivery")
	void OnDropComplete();

protected:
	virtual void BeginPlay() override;

	//Components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UCapsuleComponent* CapsuleComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UFloatingPawnMovement* MovementComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USceneComponent* AttachPoint;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mesh", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* RobotMesh;

private:
	//DeliveryState
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Delivery", meta = (AllowPrivateAccess = "true"))
	AActor* PartsSpawnPoint;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Delivery", meta = (AllowPrivateAccess = "true"))
	AActor* AssignedSpawnPoint;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Delivery", meta = (AllowPrivateAccess = "true"))
	ERobotState CurrentState = ERobotState::Idle;
	
	//CurrentParts
	UPROPERTY()
	AActor* CurrentParts = nullptr;

	UPROPERTY(EditAnywhere, Category = "Delivery")
	TArray<AActor*> DeliveryTargets;

	int32 CurrentLineIndex = 0;

	bool bIsDelivering = false;

	TSubclassOf<AAIController> AIControllerClass;
};
