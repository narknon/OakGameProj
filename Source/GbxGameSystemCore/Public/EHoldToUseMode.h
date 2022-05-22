#pragma once
#include "CoreMinimal.h"
#include "EHoldToUseMode.generated.h"

UENUM(BlueprintType)
enum class EHoldToUseMode : uint8 {
    Disabled,
    HoldOnly,
    Both,
};

