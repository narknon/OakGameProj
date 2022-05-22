#pragma once
#include "CoreMinimal.h"
#include "EConditionComparisonOperatorType.generated.h"

UENUM(BlueprintType)
enum class EConditionComparisonOperatorType : uint8 {
    EqualTo,
    NotEqualTo,
    LessThan,
    LessThanOrEqual,
    GreaterThan,
    GreaterThanOrEqual,
};

