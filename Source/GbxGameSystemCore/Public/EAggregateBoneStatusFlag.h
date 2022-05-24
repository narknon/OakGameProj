#pragma once
#include "CoreMinimal.h"
#include "EAggregateBoneStatusFlag.generated.h"

UENUM(BlueprintType)
enum class EAggregateBoneStatusFlag : uint8 {
    ABS_HasDynamic,
    ABS_HasMotion,
    ABS_HasPoseVariance,
    ABS_HasFatigue,
    ABS_HasPlayingAnimation,
    ABS_MAX UMETA(Hidden),
};

