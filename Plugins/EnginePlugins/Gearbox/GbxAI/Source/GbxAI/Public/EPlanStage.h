#pragma once
#include "CoreMinimal.h"
#include "EPlanStage.generated.h"

UENUM(BlueprintType)
enum class EPlanStage :  {
    NeedLeader,
    NeedFollowers,
    HasMinimumRoster,
    HasFullRoster,
    EveryoneCheckedIn,
    ShuttingDown,
};

