#include "DeliveryRobot/DTFDeliveryRobot.h"

#include "Manager/UI/DTFUIManager.h"
#include "Manager/GameInstance/DTFGameInstance.h"

#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

#include "AIController.h"
#include "Kismet/GameplayStatics.h"

#include "NavigationSystem.h" 
#include "NavFilters/NavigationQueryFilter.h"
#include "Navigation/PathFollowingComponent.h"

ADTFDeliveryRobot::ADTFDeliveryRobot()
{
    PrimaryActorTick.bCanEverTick = true;

    //ACharacter 기본 캡슐 사용
    UCapsuleComponent* Capsule = GetCapsuleComponent();
    Capsule->InitCapsuleSize(34.f, 88.f);

    //로봇 메쉬 (시각용, 충돌은 캡슐이 담당)
    RobotMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RobotMesh"));
    RobotMesh->SetupAttachment(Capsule);
    RobotMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    RobotMesh->SetSimulatePhysics(false);

    //파츠 붙이는 포인트
    AttachPoint = CreateDefaultSubobject<USceneComponent>(TEXT("AttachPoint"));
    AttachPoint->SetupAttachment(RobotMesh);

    //이동은 CharacterMovementComponent 사용
    if (UCharacterMovementComponent* MoveComp = GetCharacterMovement())
    {
        // 일단 단순하게: 속도만 지정
        MoveComp->MaxWalkSpeed = 400.f;
        MoveComp->SetMovementMode(MOVE_Walking);
    }

    //AI 기본 세팅
    AIControllerClass = AAIController::StaticClass();
    AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

    CurrentState = ERobotState::Idle;
}

void ADTFDeliveryRobot::BeginPlay()
{
    Super::BeginPlay();

    if (UCharacterMovementComponent* MoveComp = GetCharacterMovement())
    {
        UE_LOG(LogTemp, Log, TEXT("##DeliveryRobot MovementMode=%d MaxSpeed=%.1f"),
            (int32)MoveComp->MovementMode, MoveComp->MaxWalkSpeed);
    }

    // AIController 바인딩
    if (AAIController* AICon = Cast<AAIController>(GetController()))
    {
        if (UPathFollowingComponent* PathFollowingComp = AICon->GetPathFollowingComponent())
        {
            PathFollowingComp->OnRequestFinished.AddUObject(this, &ADTFDeliveryRobot::OnMoveCompleted);
        }
    }

    if(UDTFGameInstance* GI = Cast<UDTFGameInstance>(UGameplayStatics::GetGameInstance(GetWorld())))
    {
        if (GI->UIManager)
        {
            BindToUIManager(GI->UIManager);
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("##UIManager is nullptr in DeliveryBot BeginPlay"));
        }
    }
}

void ADTFDeliveryRobot::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ADTFDeliveryRobot::InitializeRobot(AActor* InPartsSpawnPoint, AActor* InAssignedSpawnPoint, FName InLineName)
{
    PartsSpawnPoint    = InPartsSpawnPoint;
    AssignedSpawnPoint = InAssignedSpawnPoint;
    RobotLineName      = InLineName;

    UE_LOG(LogTemp, Log, TEXT("##DeliveryRobot::InitializeRobot [%s] Parts=%s, Assigned=%s, Line=%s"),
        *GetNameSafe(this),
        *GetNameSafe(PartsSpawnPoint),
        *GetNameSafe(AssignedSpawnPoint),
        *RobotLineName.ToString());
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
        UE_LOG(LogTemp, Log, TEXT("##Robot is Idle (%s)"), *GetNameSafe(this));
        break;

    case ERobotState::MovingToPickUp:
        if (PartsSpawnPoint)
        {
            const FVector TargetLoc = PartsSpawnPoint->GetActorLocation();
            MoveToLocationAsync(TargetLoc);
        }
        break;

    case ERobotState::PickingUp:
        PickupParts(PartsSpawnPoint);
        break;

    case ERobotState::MovingToDelivery:
        if (DeliveryTargets.IsValidIndex(CurrentLineIndex))
        {
            const FVector TargetLoc = DeliveryTargets[CurrentLineIndex]->GetActorLocation();
            MoveToLocationAsync(TargetLoc);
        }
        break;

    case ERobotState::Dropping:
        DropParts();
        break;

    default:
        break;
    }
}

void ADTFDeliveryRobot::StartDelivery()
{
    if (bIsDelivering)
    {
        return;
    }

    AActor* TargetPoint = PartsSpawnPoint ? PartsSpawnPoint : AssignedSpawnPoint;
    if (!TargetPoint)
    {
        UE_LOG(LogTemp, Error, TEXT("##Cannot Start Delivery : No Spawn Point assigned! (%s)"), *GetNameSafe(this));
        return;
    }

    bIsDelivering = true;

    SetState(ERobotState::MovingToPickUp);
}

void ADTFDeliveryRobot::MoveToLocationAsync(const FVector& InTargetLocation)
{
    AAIController* AIController = Cast<AAIController>(GetController());
    if (!AIController)
    {
        UE_LOG(LogTemp, Error, TEXT("##MoveToLocationAsync: No AIController on %s"), *GetNameSafe(this));
        return;
    }

    UNavigationSystemV1* NavSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld());
    if (!NavSys)
    {
        UE_LOG(LogTemp, Error, TEXT("##MoveToLocationAsync: No NavSystem in world!"));
        return;
    }

    // 1) 목표를 NavMesh 위로 투영
    FNavLocation ProjectedLocation;
    if (!NavSys->ProjectPointToNavigation(
        InTargetLocation,
        ProjectedLocation,
        FVector(500.f, 500.f, 500.f))) // 탐색 박스 크게
    {
        UE_LOG(LogTemp, Error, TEXT("##MoveToLocationAsync: Target not on NavMesh! RawTarget=%s"),
            *InTargetLocation.ToString());
        return;
    }

    const FVector TargetLocation = ProjectedLocation.Location;

    UE_LOG(LogTemp, Log, TEXT("##MoveToLocationAsync: Final TargetLocation on NavMesh = %s"),
        *TargetLocation.ToString());

    // 2) MoveTo 요청
    FAIMoveRequest MoveReq;
    MoveReq.SetGoalLocation(TargetLocation);
    MoveReq.SetAcceptanceRadius(50.f);
    MoveReq.SetUsePathfinding(true);
    MoveReq.SetAllowPartialPath(true);
    MoveReq.SetProjectGoalLocation(false); // 이미 ProjectPointToNavigation 했으니까

    EPathFollowingRequestResult::Type Result = AIController->MoveTo(MoveReq);

    switch (Result)
    {
    case EPathFollowingRequestResult::RequestSuccessful:
        UE_LOG(LogTemp, Log, TEXT("##MoveToLocationAsync: MoveTo started. Target = %s"),
            *TargetLocation.ToString());
        break;

    case EPathFollowingRequestResult::AlreadyAtGoal:
        UE_LOG(LogTemp, Log, TEXT("##MoveToLocationAsync: Already at goal. Target = %s"),
            *TargetLocation.ToString());
        break;

    case EPathFollowingRequestResult::Failed:
    default:
        UE_LOG(LogTemp, Error, TEXT("##MoveToLocationAsync: MoveTo FAILED. Target = %s"),
            *TargetLocation.ToString());
        break;
    }
}

void ADTFDeliveryRobot::PickupParts(AActor* Parts)
{
    if (!Parts || !AttachPoint)
    {
        UE_LOG(LogTemp, Warning, TEXT("##PickupParts: No Parts (%s), No AttachPoint (%s)"),
            Parts ? TEXT("Valid") : TEXT("nullptr"),
            AttachPoint ? TEXT("Valid") : TEXT("nullptr"));
        return;
    }

    Parts->AttachToComponent(AttachPoint, FAttachmentTransformRules::KeepRelativeTransform);

    Parts->SetActorRelativeLocation(FVector::ZeroVector);
    Parts->SetActorRelativeRotation(FRotator::ZeroRotator);

    if (UStaticMeshComponent* PartMesh = Parts->FindComponentByClass<UStaticMeshComponent>())
    {
        PartMesh->SetSimulatePhysics(false);
    }

    UE_LOG(LogTemp, Log, TEXT("@@Parts %s attached to AttachPoint at %s"),
        *GetNameSafe(Parts), *AttachPoint->GetComponentLocation().ToString());

    CurrentParts = Parts;
    CurrentState = ERobotState::MovingToDelivery;

    OnPickupComplete();
}

void ADTFDeliveryRobot::DropParts()
{
    if (!CurrentParts)
    {
        UE_LOG(LogTemp, Warning, TEXT("##DropParts: No parts to drop!!"));
        return;
    }

    FVector DropLocation = AttachPoint ? AttachPoint->GetComponentLocation() : GetActorLocation();

    CurrentParts->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
    CurrentParts->SetActorLocation(DropLocation);

    UE_LOG(LogTemp, Log, TEXT("##Dropped parts: %s at %s"),
        *GetNameSafe(CurrentParts), *DropLocation.ToString());

    CurrentParts = nullptr;
    CurrentLineIndex++;

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
        bIsDelivering = false;
    }
}

void ADTFDeliveryRobot::BindToUIManager(UDTFUIManager* UIManager)
{
    if (UIManager)
    {
        UIManager->OnPartsSpawned.AddDynamic(this, &ADTFDeliveryRobot::OnPartsSpawnedAtSpawnPoint);
    }
}

void ADTFDeliveryRobot::OnPartsSpawnedAtSpawnPoint(FName LineName)
{
    if (RobotLineName != LineName)
    {
        return;
    }

    UE_LOG(LogTemp, Log, TEXT("##Robot %s: Parts spawned on my line %s"),
        *GetNameSafe(this), *LineName.ToString());

    StartDelivery();
}

void ADTFDeliveryRobot::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
    if (Result.Code != EPathFollowingResult::Success)
    {
        UE_LOG(LogTemp, Warning, TEXT("##OnMoveCompleted: Move failed or aborted for %s (Code=%d)"),
            *GetNameSafe(this), (int32)Result.Code);
        //SetState(ERobotState::Idle);
        //bIsDelivering = false;
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