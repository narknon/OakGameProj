#pragma once
#include "CoreMinimal.h"
#include "EBoostPoolValueComparisonMode.generated.h"

UENUM(BlueprintType)
enum class EBoostPoolValueComparisonMode : uint8 {
    Equal,
    NotEqual,
    GreaterThan,
    GreaterThanOrEqual,
    SmallerThan,
    SmallerThanOrEqual,
};

