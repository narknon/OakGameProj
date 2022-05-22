#pragma once
#include "CoreMinimal.h"
#include "EMissionTimerEvent.generated.h"

UENUM(BlueprintType)
enum class EMissionTimerEvent :  {
    TimerStarted,
    TimerStopped,
    TimeAdded,
    TimeExpired,
};

