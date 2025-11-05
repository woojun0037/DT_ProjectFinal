#include "Manager/DTFSpawnManager.h"
#include "CarParts/DTFCarParts.h"

ADTFSpawnManager::ADTFSpawnManager()
{
	PrimaryActorTick.bCanEverTick = false;
	RootComponent = CreateDefaultSubobject<USceneComponent>((TEXT("RootComponent")));

}

void ADTFSpawnManager::BeginPlay()
{
	Super::BeginPlay();
	InitialPosition();
	SpawnCarParts();
}

/// Soft Reference와 Hard Reference의 차이점 설명 
// UDTFDataAsset* CarPartsDataAsset;
//
// TSoftClassPtr<AActor> SoftRef = CarPartsDataAsset->PartsActorClass;
//
// SoftRef.IsValid(); // SoftRef.Get()으로 유효한 객체가 로드 되었는지 확인
// SoftRef.IsNull();  // SoftRef가 값을 가지고 있는지 여부 확인 (에셋 경로 지정 여부)
//
// 강한 레퍼런스
// TSubclassOf<AActor> SubclassRef = SoftRef.Get();
// UClass* ClassRef = SoftRef.Get();
// </remarks>

void ADTFSpawnManager::InitialPosition()
{
	TArray<AActor*> FoundFrameActors;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), FName("FrameSpawnTag"), FoundFrameActors);

	TArray<AActor*> FoundPartsActors;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), FName("PartsSpawnPoints"), FoundPartsActors);

	//이름 순서로 먼저 정렬, 그다음 숫자 순서로 정렬하는 Sort 함수를 사용한 람다식
	FoundFrameActors.Sort([this](const AActor& A, const AActor& B)
		{
			FString AFrame; int32 AFrameIndex;
			FString BFrame; int32 BFrameIndex;

			ParseSpawnPointName(A.GetActorLabel(), AFrame, AFrameIndex);
			ParseSpawnPointName(B.GetActorLabel(), BFrame, BFrameIndex);

			if (AFrame == BFrame)
			{
				return AFrameIndex < BFrameIndex;
			}
			return AFrame < BFrame;
		});

	FoundPartsActors.Sort([this](const AActor& A, const AActor& B)
		{
			FString ALine; int32 ALineIndex;
			FString BLine; int32 BLineIndex;

			ParseSpawnPointName(A.GetActorLabel(), ALine, ALineIndex);
			ParseSpawnPointName(B.GetActorLabel(), BLine, BLineIndex);

			if (ALine == BLine)
			{
				return ALineIndex < BLineIndex;
			}
			return ALine < BLine;
		});

	FrameSpawnPoints = FoundFrameActors;
	UE_LOG(LogTemp, Log, TEXT("Found %d Frame spawn points"), FrameSpawnPoints.Num());

	PartsSpawnPoints = FoundPartsActors;
	UE_LOG(LogTemp, Log, TEXT("Found %d Parts spawn points"), PartsSpawnPoints.Num());
}

void ADTFSpawnManager::ParseSpawnPointName(const FString& Name, FString& OutLine, int32& OutIndex)
{
	int32 UnderScorePos;
	if (Name.FindLastChar('_', UnderScorePos))
	{
		OutLine = Name.Mid(UnderScorePos + 1, 1);

		FString NumberStr = Name.Mid(UnderScorePos + 2);

		OutIndex = FCString::Atoi(*NumberStr);
	}
}

TSubclassOf<AActor> ADTFSpawnManager::GetPartsActorClass()
{
	if (CarPartsDataAsset == nullptr)
	{
		return nullptr;
	}

	//액터 클래스 소프트 참조 로드 지연된 로드로 에셋 경로만 참조
	if (CarPartsDataAsset->PartsActorClass.IsValid())
	{
		UE_LOG(LogTemp, Warning, TEXT("IsValid"));
		return CarPartsDataAsset->PartsActorClass.Get();
	}
	else
	{
		//메모리에 에셋이 없다면 LoadSynchronous로 에셋 바로 불러오기 
		return CarPartsDataAsset->PartsActorClass.LoadSynchronous();
	}
}

void ADTFSpawnManager::SpawnCarParts()
{
	TSubclassOf<AActor> PartsActorClass = GetPartsActorClass();
	if (PartsActorClass == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("PartsActorClass is null"));
		return;
	}

	const int32 LineIdx = GetLineIndexByName(SelectedLine);
	if (LineIdx == -1)
	{
		UE_LOG(LogTemp, Warning, TEXT("InValid line Selected: %s"), *SelectedLine.ToString());
		return;
	}

	FTransform FrameTransform, PartsTransform;
	// FrameSpawnPoints는 AActor* 배열이므로 GetActorLocation() 사용
	if (FrameSpawnPoints.IsValidIndex(LineIdx) && FrameSpawnPoints[LineIdx])
	{ 
		FrameTransform = FrameSpawnPoints[LineIdx]->GetActorTransform();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("FramePoints index %d out of range"), LineIdx);
		return;
	}

	// LineSpawnPoints도 AActor* 배열이므로 GetActorLocation() 사용
	if (PartsSpawnPoints.IsValidIndex(LineIdx) && PartsSpawnPoints[LineIdx])
	{
		PartsTransform = PartsSpawnPoints[LineIdx]->GetActorTransform();
		UE_LOG(LogTemp, Warning, TEXT("PartsSpawnPoint index %d range"), LineIdx);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PartsSpawnPoint index Outof range"), LineIdx);
		return;
	}

	UWorld* World = GetWorld();
	if (World == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("No UWorld"));
		return;
	}

	for (FPartsInfo& PartsInfo : CarPartsDataAsset->Parts)
	{
		bool  bIsFrame    = PartsInfo.bIsFrame(FramePartsName);
		int32 SpawnCount  = PartsInfo.GetSpawnCount(FramePartsName);

		FTransform BaseTransform = bIsFrame ? FrameTransform : PartsTransform;

		for (int32 i = 0; i < SpawnCount; i++)
		{
			FTransform SpawnTransform = CarculateSpawnTransform(BaseTransform, PartsInfo, i, bIsFrame);
		
			UE_LOG(LogTemp, Warning, TEXT("SpawnCarParts %s / %s"), *SpawnTransform.ToString(), *GetNameSafe(PartsActorClass));
			 
			AActor* SpawnedActor = World->SpawnActor<AActor>(PartsActorClass, SpawnTransform);
			if (SpawnedActor == nullptr)
			{
				UE_LOG(LogTemp, Warning, TEXT("Failed to Spawn Actor for Parts : %s"), *PartsInfo.PartsName.ToString());
				continue;
			}
			UStaticMeshComponent* MeshComp = SpawnedActor->FindComponentByClass<UStaticMeshComponent>();
			if (MeshComp == nullptr)
			{
				UE_LOG(LogTemp, Warning, TEXT("No StaticMeshComponent found for: %s"), *PartsInfo.PartsName.ToString());
				continue;
			}
			if (PartsInfo.PartsMesh)
			{
				MeshComp->SetStaticMesh(PartsInfo.PartsMesh);
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("PartsMesh is Null in DataAsset for: %s"), *PartsInfo.PartsName.ToString());
			}
			//SpawnedActor->SetActorScale3D(SpawnTransform.GetScale3D());

#if WITH_EDITOR
				//PartsName은 ACtor의 고유 이름이라 FName으로 해놓고 생각없이 FString으로 함 필요시 수정
				//SpawnedActor->SetActorLabel(*PartsInfo.PartsName);
#endif
			UDTFPartIdentifierComponent* PartsComp = SpawnedActor->FindComponentByClass<UDTFPartIdentifierComponent>();
			if (!PartsComp)
			{
				PartsComp    = NewObject<UDTFPartIdentifierComponent>(SpawnedActor);
				PartsComp    ->RegisterComponent(); //런타임에 동적으로 생성한 컴포넌트를 게임 오브젝트에 등록하는 함수
				SpawnedActor->AddInstanceComponent(PartsComp);
			}
			if (PartsComp)
			{
				PartsComp->PartsName = PartsInfo.PartsName;
				PartsComp->PartsType = FName(PartsInfo.PartsName);
				PartsComp->PartsNamePattern = PartsInfo.PartsNamePattern;
				PartsComp->Offset = FTransform(PartsInfo.PartsOffsetTransform);
				PartsComp->bIsMirrored = PartsInfo.bMirrorX;
				PartsComp->bIsFrame = PartsInfo.bIsFrame(FramePartsName);
				
				UE_LOG(LogTemp, Log, TEXT("PartComp Initialized for %s with offset %s, Mirrored : %s"), 
				*PartsComp->PartsName.ToString(), *PartsComp->Offset.ToString(), PartsComp->bIsMirrored ? TEXT("true") : TEXT("false"));
			}
			PartsMap.FindOrAdd(PartsComp ? PartsComp->PartsType : FName("Default")).Actors.Add(SpawnedActor);
		}
	}
}

FTransform ADTFSpawnManager::CarculateSpawnTransform(const FTransform& BaseTransform, const FPartsInfo& PartsInfo, int32 Index, bool bIsFrame)
{
	FTransform SpawnTransform = BaseTransform;

	bool bMirrorX = PartsInfo.bMirrorX;
	UE_LOG(LogTemp, Log, TEXT("## Right ? %d (%s)"), bMirrorX, *PartsInfo.PartsName.ToString());

	SpawnTransform = CreateMirroedTransform(SpawnTransform, bMirrorX);

	if (!bIsFrame)
	{
		SpawnTransform = GetOffsetTransform(SpawnTransform, PartsInfo, Index, PARTS_OFFSET_DISTANCE);
	}
	return SpawnTransform;
}

FTransform ADTFSpawnManager::CreateMirroedTransform(const FTransform& BaseTransform, bool bMirrorX)
{
	UE_LOG(LogTemp, Warning, TEXT("CreateMirroedTransform#1 %s / %d"), *BaseTransform.ToString(), bMirrorX);
	FTransform Result = BaseTransform;

	if (bMirrorX)
	{
		FVector Scale = Result.GetScale3D();
		Scale.X *= -1.f;
		Result.SetScale3D(Scale);
	}

	UE_LOG(LogTemp, Warning, TEXT("CreateMirroedTransform#2 %s / %d"), *BaseTransform.ToString(), bMirrorX);

	return Result;
}

FTransform ADTFSpawnManager::GetOffsetTransform(const FTransform& BaseTransform, const FPartsInfo& PartsInfo, int32 Index, float Offset)
{
	FTransform Result      = BaseTransform;
	FVector    Location	   = Result.GetLocation();
	FVector    PartsOffset = PartsInfo.PartsOffsetTransform.GetLocation();

	if (!PartsOffset.IsZero())
	{
		// 파츠별 오프셋이 설정되어 있으면 사용
		Location += PartsOffset;
	}
	else
	{
		// 기본 좌우 오프셋 적용 (Left/Right 분리)
		Location.X += (Index == 0) ? -Offset : Offset;
	}

	Result.SetLocation(Location);
	return Result;
}

int32 ADTFSpawnManager::GetLineIndexByName(FName LineName) const
{
	static const TArray<FName> LineNames = { FName("LineA"), FName("LineB"), FName("LineC") };

	for (int i = 0; i < LineNames.Num(); i++)
	{
		if (LineNames[i] == LineName)
		{
			UE_LOG(LogTemp, Warning, TEXT("Get By Index %d"), i);
			return i;
		}
	}
	return -1;
}