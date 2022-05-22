#pragma once
#include "CoreMinimal.h"
#include "ENumericRangeEditMode.generated.h"

UENUM(BlueprintType)
enum class ENumericRangeEditMode :  {
    MinMax,
    ValueVariance,
    Variance,
    Value,
};

