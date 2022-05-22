#pragma once
#include "CoreMinimal.h"
#include "EWeaponEffectFlag.generated.h"

UENUM(BlueprintType)
enum class EWeaponEffectFlag :  {
    AutoActivate,
    PlayOnlyOnActiveSlot,
    IgnoredByFXCoordinator,
    HideWhenScoped,
    SpawnOnlyWhenVisible,
    PlayersOnly,
};

