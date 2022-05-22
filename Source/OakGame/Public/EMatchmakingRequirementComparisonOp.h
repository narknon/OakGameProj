#pragma once
#include "CoreMinimal.h"
#include "EMatchmakingRequirementComparisonOp.generated.h"

UENUM(BlueprintType)
enum class EMatchmakingRequirementComparisonOp : uint8 {
    None,
    Equal,
    NotEqual,
    LessThan,
    GreaterThan,
};

