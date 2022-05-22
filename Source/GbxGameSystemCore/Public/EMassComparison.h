#pragma once
#include "CoreMinimal.h"
#include "EMassComparison.generated.h"

UENUM(BlueprintType)
enum class EMassComparison : uint8 {
    LessThanOrEqual,
    LessThan,
    EqualTo,
    NotEqualTo,
    GreaterThan,
    GreaterThanOrEqual,
};

