#pragma once
#include "CoreMinimal.h"
#include "ECARPartType.generated.h"

UENUM(BlueprintType)
enum class ECARPartType : uint8 {
    Wheel = 0x1,
    Armor,
    CoreMod,
    GunnerWeapon,
    DriverWeapon,
    Ornament,
    MaterialDecal,
    Material,
    None,
};

