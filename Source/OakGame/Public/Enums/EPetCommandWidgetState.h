#pragma once
#include "CoreMinimal.h"
#include "EPetCommandWidgetState.generated.h"

UENUM(BlueprintType)
enum class EPetCommandWidgetState :  {
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

