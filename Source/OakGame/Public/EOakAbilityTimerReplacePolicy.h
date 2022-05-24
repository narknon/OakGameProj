#pragma once
#include "CoreMinimal.h"
#include "EOakAbilityTimerReplacePolicy.generated.h"

UENUM(BlueprintType)
enum class EOakAbilityTimerReplacePolicy : uint8 {
    KeepExisting,
    ReplaceExisting,
};

