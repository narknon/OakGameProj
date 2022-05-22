#pragma once
#include "CoreMinimal.h"
#include "EOakWeaponPartType.generated.h"

UENUM(BlueprintType)
enum class EOakWeaponPartType : uint8 {
    Grip,
    Foregrip,
    Mag,
    Mode,
    ModeSwitch,
    Barrel,
    Scope,
    Reload,
    Melee,
    Bolt,
    Trigger,
    Hammer,
    CustomA,
    CustomB,
};

