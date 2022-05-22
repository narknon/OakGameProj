#pragma once
#include "CoreMinimal.h"
#include "EMissionIconState.generated.h"

UENUM(BlueprintType)
enum EMissionIconState {
    IconState_Default,
    IconState_ForceDisabled,
    IconState_ForceEnabled,
    IconState_MAX UMETA(Hidden),
};

