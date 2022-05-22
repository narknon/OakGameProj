#pragma once
#include "CoreMinimal.h"
#include "EWeaponShotDamageModifierType.generated.h"

UENUM(BlueprintType)
enum class EWeaponShotDamageModifierType : int32 {
    Scale,
    Add,
    SimpleScale,
};

