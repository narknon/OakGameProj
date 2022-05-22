#pragma once
#include "CoreMinimal.h"
#include "EHitReactionConditionCombine.generated.h"

UENUM(BlueprintType)
enum class EHitReactionConditionCombine : uint8 {
    And,
    Or,
};

