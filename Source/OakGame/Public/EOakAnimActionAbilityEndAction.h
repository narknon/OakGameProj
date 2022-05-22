#pragma once
#include "CoreMinimal.h"
#include "EOakAnimActionAbilityEndAction.generated.h"

UENUM(BlueprintType)
enum class EOakAnimActionAbilityEndAction : uint8 {
    None,
    Stop,
    Abort,
    AbortReset,
};

