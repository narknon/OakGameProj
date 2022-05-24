#pragma once
#include "CoreMinimal.h"
#include "EWeaponShotDamageModifierType.generated.h"

UENUM()
enum class EWeaponShotDamageModifierType : int32 {
    Scale,
    Add,
    SimpleScale,
};

