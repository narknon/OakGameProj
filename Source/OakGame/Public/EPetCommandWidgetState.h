#pragma once
#include "CoreMinimal.h"
#include "EPetCommandWidgetState.generated.h"

UENUM(BlueprintType)
enum class EPetCommandWidgetState : uint8 {
    Off,
    Ready,
    Unlocked,
    Activated,
    BeginCooldown,
    CoolingDown,
    NowReady,
    CantUse,
    Initalization,
};

