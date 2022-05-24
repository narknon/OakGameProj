#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GFxMissionTrackerRewardDisplayData.h"
#include "GFxMissionTrackerRewardQueueData.generated.h"

class UMission;

USTRUCT(BlueprintType)
struct OAKGAME_API FGFxMissionTrackerRewardQueueData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FGFxMissionTrackerRewardDisplayData RewardData;
    
    UPROPERTY(Transient)
    TSubclassOf<UMission> Mission;
    
    FGFxMissionTrackerRewardQueueData();
};

