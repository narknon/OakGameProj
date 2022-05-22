#pragma once
#include "CoreMinimal.h"
#include "EBoostChargeCountComparisonMode.generated.h"

UENUM(BlueprintType)
enum class EBoostChargeCountComparisonMode : uint8 {
    Equal,
    NotEqual,
    GreaterThan,
    GreaterThanOrEqual,
    SmallerThan,
    SmallerThanOrEqual,
    FullCharges,
};

