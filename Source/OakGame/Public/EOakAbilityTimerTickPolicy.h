#pragma once
#include "CoreMinimal.h"
#include "EOakAbilityTimerTickPolicy.generated.h"

UENUM(BlueprintType)
enum class EOakAbilityTimerTickPolicy : uint8 {
    AlwaysTick,
    OnlyWhenActive,
};

