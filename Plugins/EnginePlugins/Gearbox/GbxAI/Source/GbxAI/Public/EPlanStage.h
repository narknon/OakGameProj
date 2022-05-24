#pragma once
#include "CoreMinimal.h"
#include "EPlanStage.generated.h"

UENUM(BlueprintType)
enum class EPlanStage : uint8 {
    NeedLeader,
    NeedFollowers,
    HasMinimumRoster,
    HasFullRoster,
    EveryoneCheckedIn,
    ShuttingDown,
};

