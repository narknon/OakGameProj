#pragma once
#include "CoreMinimal.h"
#include "EAIChargeAnim.generated.h"

UENUM(BlueprintType)
enum class EAIChargeAnim :  {
    None,
    Start,
    Loop,
    Miss,
    Strike,
    HitWall,
    ReachCliff,
    StopForFriendly,
};

