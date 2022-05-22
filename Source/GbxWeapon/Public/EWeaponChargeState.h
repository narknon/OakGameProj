#pragma once
#include "CoreMinimal.h"
#include "EWeaponChargeState.generated.h"

UENUM(BlueprintType)
enum class EWeaponChargeState : uint8 {
    None,
    Discharging,
    Charging,
    Charged,
    Overcharged,
};

