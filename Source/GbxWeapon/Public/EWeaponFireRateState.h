#pragma once
#include "CoreMinimal.h"
#include "EWeaponFireRateState.generated.h"

UENUM(BlueprintType)
enum class EWeaponFireRateState : uint8 {
    None,
    Accelerating,
    Decelerating,
};

