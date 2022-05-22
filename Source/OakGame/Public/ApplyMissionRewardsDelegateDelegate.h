#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ProcessedReward.h"
#include "ApplyMissionRewardsDelegateDelegate.generated.h"

class UMission;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FApplyMissionRewardsDelegate, TSubclassOf<UMission>, MissionClass, const FProcessedReward&, Reward, const FProcessedReward&, OptionalReward);

