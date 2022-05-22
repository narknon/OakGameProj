#pragma once
#include "CoreMinimal.h"
#include "EGbxParamValueMode.generated.h"

UENUM(BlueprintType)
enum class EGbxParamValueMode : uint8 {
    Value,
    ValueVariance,
    MinMax,
    Actor,
    None,
    BlackboardKey,
    Condition,
    AttributeInitializationData,
    Count,
};

