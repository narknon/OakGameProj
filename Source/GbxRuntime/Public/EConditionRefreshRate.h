#pragma once
#include "CoreMinimal.h"
#include "EConditionRefreshRate.generated.h"

UENUM(BlueprintType)
enum class EConditionRefreshRate : uint8 {
    OncePerThreeSeconds,
    OncePerSecond,
    TwicePerSecond,
    FourTimesPerSecond,
    Immediately,
};

