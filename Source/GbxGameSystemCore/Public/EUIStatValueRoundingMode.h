#pragma once
#include "CoreMinimal.h"
#include "EUIStatValueRoundingMode.generated.h"

UENUM(BlueprintType)
enum class EUIStatValueRoundingMode : uint8 {
    None,
    RoundToInt,
    FloorToInt,
    CeilToInt,
};

