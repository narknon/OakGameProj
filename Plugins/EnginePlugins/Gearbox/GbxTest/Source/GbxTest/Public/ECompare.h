#pragma once
#include "CoreMinimal.h"
#include "ECompare.generated.h"

UENUM(BlueprintType)
enum class ECompare : uint8 {
    EQ,
    NE,
    GT,
    GE,
    LT,
    LE,
};

