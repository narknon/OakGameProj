#pragma once
#include "CoreMinimal.h"
#include "EWeaponUseMode.generated.h"

UENUM(BlueprintType)
enum class EWeaponUseMode : uint8 {
    Mode1,
    Mode2,
    Mode3,
    EWeaponUseMode_MAX = 0xFF,
};

