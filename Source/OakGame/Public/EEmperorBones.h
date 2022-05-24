#pragma once
#include "CoreMinimal.h"
#include "EEmperorBones.generated.h"

UENUM(BlueprintType)
enum class EEmperorBones : uint8 {
    Body,
    Cannon_Yaw,
    Cannon_Pitch,
    Cannon_Recoil,
    EntropyCore,
    CannonTurret_Main,
    CannonTurret_Pitch,
    L_Turret_Yaw,
    L_Turret_Pitch,
    R_Turret_Yaw,
    R_Turret_Pitch,
    F_R_Wheel,
    F_R_Wheel1,
    F_R_Wheel2,
    F_L_Wheel,
    F_L_Wheel1,
    F_L_Wheel2,
    R_R_Wheel,
    R_L_Wheel,
    R_L_Wheel1,
    R_R_Wheel1,
    F_L_ThreadSuspension,
    F_R_ThreadSuspension,
    F_L_BigWheel_Suspension,
    F_R_BigWheel_Suspension,
    F_R_Hover01,
    F_R_Hover02,
    F_R_Hover03,
    F_L_Hover01,
    F_L_Hover02,
    F_L_Hover03,
    R_R_Hover01,
    R_R_Hover02,
    R_L_Hover01,
    R_L_Hover02,
    Count,
};

