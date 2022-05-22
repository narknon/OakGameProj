#pragma once
#include "CoreMinimal.h"
#include "EObjectiveCountComparisonOperatorType.generated.h"

UENUM(BlueprintType)
enum class EObjectiveCountComparisonOperatorType : uint8 {
    EqualTo,
    NotEqualTo,
    LessThan,
    LessThanOrEqualTo,
    GreaterThan,
    GreaterThanOrEqualTo,
};

