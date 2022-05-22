#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ReplicatedMissionProgress.h"
#include "TimedMissionData.h"
#include "ReplicatedMissionData.generated.h"

class UMission;

USTRUCT(BlueprintType)
struct FReplicatedMissionData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FReplicatedMissionProgress> Progress;
    
    UPROPERTY()
    TSubclassOf<UMission> TrackedMission;
    
    UPROPERTY()
    TArray<FTimedMissionData> ActiveTimedMissions;
    
    GBXMISSION_API FReplicatedMissionData();
};

