#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Kismet/GameplayStatics.h"
#include "Components/CapsuleComponent.h"
#include "AIController.h"
#include "Navigation/PathFollowingComponent.h"
#include "DTFDeliveryRobot.generated.h"


UENUM(BlueprintType)
enum class ERobotState : uint8
{
	Idle,
	MovingToPickUp,
	PickingUp,
	MovingToDelivery,
	Dropping
};

UCLASS()
class DT_PROJECTFINAL_API ADTFDeliveryRobot : public APawn
{
	GENERATED_BODY()
	
public:	
	ADTFDeliveryRobot();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Delivery")
	void MoveToLocation(FVector TargetLocation);
	
	UFUNCTION(BlueprintCallable, Category = "Delivery")
	void PickupParts(AActor* Parts);

	UFUNCTION(BlueprintCallable, Category = "Delivery")
	void DropParts();

	UFUNCTION(BlueprintCallable, Category = "Delivery")
	void StartDelivery();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	USceneComponent* AttachPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	UCapsuleComponent* CapsuleComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* RobotMesh;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	UFloatingPawnMovement* MovementComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Delivery")
	TArray<AActor*> DeliveryTargets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Delivery")
	float MovementSpeed = 300.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Delivery")
	AActor* PartsSpawnPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Delivery")
	AActor* CurrentParts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Delivery")
	ERobotState CurrentState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Delivery")
	int32 CurrentLineIndex = 0;

	//BP에서 오버라이드 가능한 이벤트
	UFUNCTION(BlueprintImplementableEvent, Category = "Delivery")
	void OnPickupComplete();

	UFUNCTION(BlueprintImplementableEvent, Category = "Delivery")
	void OnDropComplete();

	//이동 끝
	void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result);
};
