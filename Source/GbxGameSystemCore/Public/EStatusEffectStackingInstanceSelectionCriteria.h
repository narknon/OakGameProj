#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectStackingInstanceSelectionCriteria.generated.h"

UENUM(BlueprintType)
enum class EStatusEffectStackingInstanceSelectionCriteria : uint8 {
    NewestInstance,
    OldestInstance,
    MostTimeRemaining,
    LeastTimeRemaining,
};

