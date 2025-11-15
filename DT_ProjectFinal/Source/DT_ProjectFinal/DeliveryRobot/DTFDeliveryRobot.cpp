#include "DeliveryRobot/DTFDeliveryRobot.h"

#include "Manager/UI/DTFUIManager.h"
#include "Manager/GameInstance/DTFGameInstance.h"

#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"

#include "AIController.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Kismet/GameplayStatics.h"
#include "Navigation/PathFollowingComponent.h"

ADTFDeliveryRobot::ADTFDeliveryRobot()
{
	PrimaryActorTick.bCanEverTick = true;

	CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
	CapsuleComponent->InitCapsuleSize(34.f, 88.f); // 반경 높이
	SetRootComponent(CapsuleComponent);
	
	RobotMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RobotMesh"));
	RobotMesh->SetupAttachment(CapsuleComponent);
	//RootComponent = CapsuleComponent;

	AttachPoint = CreateDefaultSubobject<USceneComponent>(TEXT("AttachPoint"));
	AttachPoint->SetupAttachment(RobotMesh);

	MovementComponent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("MovementCompoent"));

	AIControllerClass = AAIController::StaticClass();
	AutoPossessAI     = EAutoPossessAI::PlacedInWorldOrSpawned;

	CurrentState      = ERobotState::Idle;
}


void ADTFDeliveryRobot::BeginPlay()
{ 
	Super::BeginPlay();
	
	TArray<AActor*> FoundTargets;
	DeliveryTargets = FoundTargets;

	// AIController 바인딩
	if (AAIController* AICon = Cast<AAIController>(GetController()))
	{
		if (UPathFollowingComponent* PathFollowingComp = AICon->GetPathFollowingComponent())
		{
			PathFollowingComp->OnRequestFinished.AddUObject(this, &ADTFDeliveryRobot::OnMoveCompleted);
		}
	}

	UDTFGameInstance* GI = Cast<UDTFGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	if (GI && GI->UIManager)
	{
		BindToUIManager(GI->UIManager);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("##UIManager is nullptr in DeleveryBot BeginPlay"));
	}
}

void ADTFDeliveryRobot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ADTFDeliveryRobot::InitializeRobot(AActor* InPartsSpawnPoint, AActor* InAssignedSpawnPoint)
{
	PartsSpawnPoint    = InPartsSpawnPoint;
	AssignedSpawnPoint = InAssignedSpawnPoint;

	UE_LOG(LogTemp, Log,
		TEXT("##DeliveryRobot::InitializeRobot [%s] Parts=%s, Assigned=%s"),
		*GetName(),
		*GetNameSafe(PartsSpawnPoint),
		*GetNameSafe(AssignedSpawnPoint));
}

void ADTFDeliveryRobot::SetState(ERobotState NewState)
{
	if (CurrentState == NewState)
	{
		return;
	}
	CurrentState = NewState;

	switch (NewState)
	{
	case ERobotState::Idle:
		UE_LOG(LogTemp, Log, TEXT("##Robot is Idle"));
		break;

	case ERobotState::MovingToPickUp:
		if (PartsSpawnPoint)
		{
			FVector TargetLoc = PartsSpawnPoint->GetActorLocation();
			TargetLoc.Z = GetActorLocation().Z;
			MoveToLocationAsync(TargetLoc);
		}
		break;

	case ERobotState::PickingUp:
		PickupParts(PartsSpawnPoint);
		break;

	case ERobotState::MovingToDelivery:
		if (DeliveryTargets.IsValidIndex(CurrentLineIndex))
		{
			FVector TargetLoc = DeliveryTargets[CurrentLineIndex]->GetActorLocation();
			TargetLoc.Z = GetActorLocation().Z;
			MoveToLocationAsync(TargetLoc);
		}
		break;

	case ERobotState::Dropping:
		DropParts();
		break;

	case ERobotState::Error:
		UE_LOG(LogTemp, Warning, TEXT("Error state!"));
		break;

	default:
		break;
	}
}

void ADTFDeliveryRobot::StartDelivery()
{
	if (bIsDelivering)
	{
		UE_LOG(LogTemp, Log, TEXT("##StartDelivery called again on %s, but already delivering. Ignoring."), *GetNameSafe(this));
		return;
	}

	AActor* TargetPoint = AssignedSpawnPoint ? AssignedSpawnPoint : PartsSpawnPoint;
	if (!TargetPoint)
	{
		UE_LOG(LogTemp, Error, TEXT("##Cannot Start Delivery : No Spawn Point assigned!"));
		return;
	}

	if (DeliveryTargets.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("##StartDelivery : No Delivery : No Delivery Target set yet (moving to spawn point only)"));
	}

	const FVector TargetLocation = TargetPoint->GetActorLocation();
	UE_LOG(LogTemp, Log, TEXT("##StartDelivery : %s moving to %s"), *GetNameSafe(this), *TargetLocation.ToString());
	bIsDelivering = true;

	MoveToLocationAsync(TargetPoint->GetActorLocation());
	UE_LOG(LogTemp, Log, TEXT("Starting Delivery to %d targets"), DeliveryTargets.Num());
}

void ADTFDeliveryRobot::MoveToLocationAsync(const FVector& InTargetLocation)
{
	AAIController* AIController = Cast<AAIController>(GetController());
	if (!AIController)
	{
		UE_LOG(LogTemp, Warning, TEXT("##No AI CONTROLLER!!"));
		return;
	}
	
	FVector TargetLocation = InTargetLocation;
	TargetLocation.Z = GetActorLocation().Z;

	FAIMoveRequest MoveRequest;
	MoveRequest.SetGoalLocation(TargetLocation);
	MoveRequest.SetAcceptanceRadius(50.0f);
	
	EPathFollowingRequestResult::Type Result = AIController->MoveTo(MoveRequest);
	if (Result != EPathFollowingRequestResult::RequestSuccessful)
	{
		UE_LOG(LogTemp, Warning, TEXT("##MoveToLocationAsync : MoveTo request failed or InValid"));
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("##MoveToLocationAsync : MoveTo request started successfuly"));
	}
}


void ADTFDeliveryRobot::PickupParts(AActor* Parts)
{
	if (!Parts || !AttachPoint)
	{
		UE_LOG(LogTemp, Warning, TEXT("No Parts: %s, No Attach : %s"), 
		Parts ? TEXT("Valid") :  TEXT("nullptr"), AttachPoint ? TEXT("Valid") : TEXT("nullptr"));
		return;
	}
	 
	Parts->AttachToComponent(AttachPoint, FAttachmentTransformRules::KeepRelativeTransform);

	Parts->SetActorRelativeLocation(FVector::ZeroVector);
	Parts->SetActorRelativeRotation(FRotator::ZeroRotator);

	//물리 비활성화
	if (UStaticMeshComponent* PartMesh = Parts->FindComponentByClass<UStaticMeshComponent>())
	{
		PartMesh->SetSimulatePhysics(false);
	}
	UE_LOG(LogTemp, Log, TEXT("@@Parts %s attached to AttachPoint at %s"), *Parts->GetName(), *AttachPoint->GetComponentLocation().ToString());
	UE_LOG(LogTemp, Log, TEXT("@@Parts location after attach: %s"), *Parts->GetActorLocation().ToString());

	CurrentParts = Parts;
	CurrentState = ERobotState::MovingToDelivery;
	 
	//BP 이벤트 트리거
	OnPickupComplete();
}

void ADTFDeliveryRobot::DropParts()
{
	if (!CurrentParts)
	{
		UE_LOG(LogTemp, Warning, TEXT("No parts to Drop!!"));
		return;
	}
	FVector DropLocation = AttachPoint->GetComponentLocation();

	//Parts 분리
	CurrentParts->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	CurrentParts->SetActorLocation(DropLocation);

	UE_LOG(LogTemp, Log, TEXT("Dropped parts: %s at %s"), *CurrentParts->GetName(), *DropLocation.ToString());

	CurrentParts = nullptr;
	CurrentLineIndex++;

	//BP 이벤트 트리거
	OnDropComplete();

	if (CurrentLineIndex < DeliveryTargets.Num())
	{
		CurrentState = ERobotState::MovingToPickUp;
	}
	else
	{
		CurrentState = ERobotState::Idle;
		CurrentLineIndex = 0;
		UE_LOG(LogTemp, Log, TEXT("##All Deliveries Complete!!"));
	}
}

void ADTFDeliveryRobot::BindToUIManager(UDTFUIManager* UIManager)
{
	if (UIManager)
	{
		UIManager->OnPartsSpawned.AddDynamic(this, &ADTFDeliveryRobot::OnPartsSpawnedAtSpawnPoint);
	}
}

void ADTFDeliveryRobot::OnPartsSpawnedAtSpawnPoint()
{
	if (PartsSpawnPoint)
	{
		SetState(ERobotState::MovingToPickUp);
	}
}

void ADTFDeliveryRobot::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
	if (Result.Code != EPathFollowingResult::Success)
	{
		UE_LOG(LogTemp, Warning, TEXT("Move failed or aborted"));
		SetState(ERobotState::Idle);
		return;
	}

	switch (CurrentState)
	{
	case ERobotState::MovingToPickUp:
		SetState(ERobotState::PickingUp);
		break;

	case ERobotState::MovingToDelivery:
		SetState(ERobotState::Dropping);
		break;

	default:
		break;
	}
}



