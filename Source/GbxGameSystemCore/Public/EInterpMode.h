#pragma once
#include "CoreMinimal.h"
#include "EInterpMode.generated.h"

UENUM(BlueprintType)
enum class EInterpMode : uint8 {
    None,
    Linear,
    NonLinear,
    Count,
};

