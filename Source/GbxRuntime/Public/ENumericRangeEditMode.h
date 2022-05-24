#pragma once
#include "CoreMinimal.h"
#include "ENumericRangeEditMode.generated.h"

UENUM(BlueprintType)
enum class ENumericRangeEditMode : uint8 {
    MinMax,
    ValueVariance,
    Variance,
    Value,
};

