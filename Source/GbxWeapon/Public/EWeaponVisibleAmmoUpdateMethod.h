#pragma once
#include "CoreMinimal.h"
#include "EWeaponVisibleAmmoUpdateMethod.generated.h"

UENUM(BlueprintType)
enum class EWeaponVisibleAmmoUpdateMethod : uint8 {
    Auto,
    Manual,
    AutoAdd,
    AutoRemove,
};

