#pragma once
#include "CoreMinimal.h"
#include "EEdgeFlashType.generated.h"

UENUM(BlueprintType)
enum class EEdgeFlashType : uint8 {
    None,
    InterpolatedDecreaseOnly,
    All,
};

