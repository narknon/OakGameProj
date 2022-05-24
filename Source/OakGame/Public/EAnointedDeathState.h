#pragma once
#include "CoreMinimal.h"
#include "EAnointedDeathState.generated.h"

UENUM(BlueprintType)
enum class EAnointedDeathState : uint8 {
    PreFreeze,
    Freezing,
    Frozen,
    ShatterKilled,
    TimedOut,
};

