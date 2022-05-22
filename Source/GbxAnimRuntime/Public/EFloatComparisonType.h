#pragma once
#include "CoreMinimal.h"
#include "EFloatComparisonType.generated.h"

UENUM(BlueprintType)
enum class EFloatComparisonType : uint8 {
    Equal,
    NotEqual,
    GreaterThan,
    GreaterThanOrEqual,
    LessThan,
    LessThanOrEqual,
};

