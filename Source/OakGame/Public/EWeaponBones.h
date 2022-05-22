#pragma once
#include "CoreMinimal.h"
#include "EWeaponBones.generated.h"

UENUM(BlueprintType)
enum class EWeaponBones :  {
    None,
    Root,
    Main,
    Turret_Yaw,
    Turret_Pitch,
    Cannon_Yaw,
    Cannon_Pitch,
    Projectile,
    Count,
};

