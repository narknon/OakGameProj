#pragma once
#include "CoreMinimal.h"
#include "GuardianRewardEnableChangeDelegate.generated.h"

class UGuardianRankRewardData;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGuardianRewardEnableChange, const UGuardianRankRewardData*, ChangedReward, bool, bEnabled);

