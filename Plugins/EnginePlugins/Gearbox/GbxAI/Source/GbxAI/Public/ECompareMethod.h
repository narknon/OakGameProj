#pragma once
#include "CoreMinimal.h"
#include "ECompareMethod.generated.h"

UENUM(BlueprintType)
enum class ECompareMethod : uint8 {
    Equals,
    NotEquals,
    Smaller,
    SmallerOrEqual,
    Greater,
    GreaterOrEqual,
};

