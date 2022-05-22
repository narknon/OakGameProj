#pragma once
#include "CoreMinimal.h"
#include "EUIStatCombinationMethod.generated.h"

UENUM(BlueprintType)
enum class EUIStatCombinationMethod : uint8 {
    Multiply,
    Divide,
    Add,
    Subtract,
    DontCombine,
};

