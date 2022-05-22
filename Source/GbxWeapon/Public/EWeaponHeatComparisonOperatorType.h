#pragma once
#include "CoreMinimal.h"
#include "EWeaponHeatComparisonOperatorType.generated.h"

UENUM(BlueprintType)
enum class EWeaponHeatComparisonOperatorType : uint8 {
    LessThan,
    LessThanOrEqual,
    GreaterThan,
    GreaterThanOrEqual,
};

