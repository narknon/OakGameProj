#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectStackingInstanceReplacementCriteria.generated.h"

UENUM(BlueprintType)
enum class EStatusEffectStackingInstanceReplacementCriteria : uint8 {
    ChooseSpec,
    ChooseLowerDPS,
    ChooseHigherDPS,
    ChooseLongerDuration,
    ChooseShorterDuration,
};

