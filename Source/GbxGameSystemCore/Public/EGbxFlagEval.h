#pragma once
#include "CoreMinimal.h"
#include "EGbxFlagEval.generated.h"

UENUM(BlueprintType)
enum class EGbxFlagEval : uint8 {
    IsTrue,
    IsFalse,
    TrueForXSeconds,
    FalseForXSeconds,
    TrueWithinXSeconds,
    FalseWithinXSeconds,
};

