#pragma once
#include "CoreMinimal.h"
#include "EDualWeaponBones.generated.h"

UENUM(BlueprintType)
enum class EDualWeaponBones :  {
    Root,
    Main,
    Base,
    L_Base,
    L_Shoulder,
    L_Elbow,
    L_End,
    L_Elbow_Piston,
    L_Shoulder_Piston,
    L_Pitch,
    L_Projectile,
    R_Base,
    R_Shoulder,
    R_Elbow,
    R_End,
    R_Elbow_Piston,
    R_Shoulder_Piston,
    R_Pitch,
    R_Projectile,
    L_BaseAttach,
    R_BaseAttach,
    Count,
};

