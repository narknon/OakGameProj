#pragma once
#include "CoreMinimal.h"
#include "EChargeCurveType.generated.h"

UENUM(BlueprintType)
enum class EChargeCurveType : uint8 {
    Relative,
    Absolute,
};

