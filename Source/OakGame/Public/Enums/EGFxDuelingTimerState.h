#pragma once
#include "CoreMinimal.h"
#include "EGFxDuelingTimerState.generated.h"

UENUM(BlueprintType)
enum class EGFxDuelingTimerState : uint8 {
    TimerOnly,
    TimerAndMatch,
    Challenger,
    TimeOut,
    Hidden,
};

