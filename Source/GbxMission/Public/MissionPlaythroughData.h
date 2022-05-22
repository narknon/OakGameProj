#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MissionStatusPlayerData.h"
#include "MissionPlaythroughData.generated.h"

class UMission;

USTRUCT(BlueprintType)
struct FMissionPlaythroughData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FMissionStatusPlayerData> MissionList;
    
    UPROPERTY()
    TSubclassOf<UMission> TrackedMission;
    
    GBXMISSION_API FMissionPlaythroughData();
};

