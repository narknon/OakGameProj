#pragma once
#include "CoreMinimal.h"
#include "EWeaponVisibleAmmoState.generated.h"

UENUM(BlueprintType)
enum class EWeaponVisibleAmmoState : uint8 {
    LoadedAmmo,
    PendingLoadedAmmo,
    Disabled,
};

