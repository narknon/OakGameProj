#pragma once
#include "CoreMinimal.h"
#include "EGbxParamValueType.generated.h"

UENUM(BlueprintType)
enum class EGbxParamValueType : uint8 {
    Float,
    Bool,
    Int,
    EnvQueryContext,
    Object,
    Count,
};

