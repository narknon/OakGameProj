#pragma once
#include "CoreMinimal.h"
#include "EMissionTimerEvent.generated.h"

UENUM(BlueprintType)
enum class EMissionTimerEvent : uint8 {
    TimerStarted,
    TimerStopped,
    TimeAdded,
    TimeExpired,
};

