#pragma once
#include "CoreMinimal.h"
#include "ERecentDamageFlags.generated.h"

UENUM(BlueprintType)
enum class ERecentDamageFlags : uint8 {
    None,
    CriticalHit,
    Healing,
    Shield = 0x4,
    Armor = 0x8,
    DamageOverTime = 0x10,
    Resist = 0x20,
    ZeroDamage = 0x40,
    Weapon = 0x80,
};

