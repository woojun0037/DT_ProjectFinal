#include "DeliveryRobot/DTFDeliveryRobot.h"
#include "Navigation/PathFollowingComponent.h"
#include "AIController.h"

ADTFDeliveryRobot::ADTFDeliveryRobot()
{
	PrimaryActorTick.bCanEverTick = true;

	RobotMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RobotMesh"));
	SetRootComponent(RobotMesh);
	//RootComponent = RobotMesh;

	AttachPoint = CreateDefaultSubobject<USceneComponent>(TEXT("AttachPoint"));
	AttachPoint->SetupAttachment(RobotMesh);

	MovementComponent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("MovementCompoent"));

	AIControllerClass = AAIController::StaticClass();
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

	CurrentState = ERobotState::Idle;
}


void ADTFDeliveryRobot::BeginPlay()
{ 
	Super::BeginPlay();

	//BP에서 할당하지 않았으면 자동으로 찾기
	if (!PartsSpawnPoint)
	{
		TArray<AActor*> FoundActors;
		UGameplayStatics::GetAllActorsWithTag(GetWorld(), FName("PartsSpawnPoints"), FoundActors);

		if (FoundActors.Num() > 0)
		{
			PartsSpawnPoint = FoundActors[0];
			UE_LOG(LogTemp, Log, TEXT("Found PartsSpawnPoint by tag: %s"), *PartsSpawnPoint->GetName());
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("PartsSpawnPoint not Found! Add 'PartsSpawnPoint' tag to spawn actor."));
		}
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("PartsSpawnPoint assigned from BP : %s"), *PartsSpawnPoint->GetName());
	}

	if (DeliveryTargets.Num() == 0)
	{
		TArray<AActor*> FoundTargets;
		UGameplayStatics::GetAllActorsWithTag(GetWorld(), FName("DeliveryPoint"), FoundTargets);
		DeliveryTargets = FoundTargets;

		UE_LOG(LogTemp, Log, TEXT("Found %d Delivery targets by tag"), DeliveryTargets.Num());
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("Delivery targets assined from BP : %d Targets"), DeliveryTargets.Num());
	}

	if (AAIController* AICon = Cast<AAIController>(GetController()))
	{
		UPathFollowingComponent* PathFollowingComp = AICon->GetPathFollowingComponent();
		if (PathFollowingComp)
		{
			PathFollowingComp->OnRequestFinished.AddUObject(this, &ADTFDeliveryRobot::OnMoveCompleted);
			UE_LOG(LogTemp, Log, TEXT("Bound OnMoveCompleted delegate via Path Following Component"));
		}
	}
}

void ADTFDeliveryRobot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ADTFDeliveryRobot::MoveToLocation(FVector TargetLocation)
{
	AAIController* AIController = Cast<AAIController>(GetController());
	if (!AIController)
	{
		UE_LOG(LogTemp, Warning, TEXT("No AI CONTROLLER!!"));
		return;
	}

	FAIMoveRequest MoveRequest;
	MoveRequest.SetGoalLocation(TargetLocation);
	MoveRequest.SetAcceptanceRadius(50.0f);

	FNavPathSharedPtr NavPath;
	AIController->MoveTo(MoveRequest, &NavPath);

	UE_LOG(LogTemp, Log, TEXT("Moving to location: %s"), *TargetLocation.ToString());
}


void ADTFDeliveryRobot::PickupParts(AActor* Parts)
{
	if (!Parts || !AttachPoint)
	{
		UE_LOG(LogTemp, Warning, TEXT("No Parts: %s, No Attach : %s"), 
		Parts ? TEXT("Valid") :  TEXT("nullptr"), AttachPoint ? TEXT("Valid") : TEXT("nullptr"));
		return;
	}
	 
	Parts->AttachToComponent(AttachPoint, FAttachmentTransformRules::SnapToTargetNotIncludingScale);

	//물리 비활성화
	if (UStaticMeshComponent* PartMesh = Parts->FindComponentByClass<UStaticMeshComponent>())
	{
		PartMesh->SetSimulatePhysics(false);
	}
	
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
		UE_LOG(LogTemp, Log, TEXT("All Deliveries Complete!!"));
	}
}

void ADTFDeliveryRobot::StartDelivery()
{
	if (!PartsSpawnPoint)
	{
		UE_LOG(LogTemp, Error, TEXT("Cannot start Delivery : PartsSpawnPoint is Null!"));
		return;
	}

	if (DeliveryTargets.Num() == 0)
	{
		UE_LOG(LogTemp, Error, TEXT("Cannot start Delivery : No Delivery targets!"));
		return;
	}

	CurrentState = ERobotState::MovingToPickUp;

	FVector loc = PartsSpawnPoint->GetActorLocation();
	loc.Z = GetActorLocation().Z;

	MoveToLocation(loc);

	UE_LOG(LogTemp, Log, TEXT("Starting Delivery to %d Targets"), DeliveryTargets.Num());
}

void ADTFDeliveryRobot::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{

}


