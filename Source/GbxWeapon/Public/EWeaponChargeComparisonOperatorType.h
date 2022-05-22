#pragma once
#include "CoreMinimal.h"
#include "EWeaponChargeComparisonOperatorType.generated.h"

UENUM(BlueprintType)
enum class EWeaponChargeComparisonOperatorType : uint8 {
    LessThan,
    LessThanOrEqual,
    GreaterThan,
    GreaterThanOrEqual,
};

