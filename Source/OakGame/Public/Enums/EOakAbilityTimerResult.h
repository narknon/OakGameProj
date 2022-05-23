#pragma once
#include "CoreMinimal.h"
#include "EOakAbilityTimerResult.generated.h"

UENUM(BlueprintType)
enum class EOakAbilityTimerResult : uint8 {
    Pulsed,
    Finished,
    Stopped,
    Replaced,
};

