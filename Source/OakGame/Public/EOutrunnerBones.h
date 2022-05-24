#pragma once
#include "CoreMinimal.h"
#include "EOutrunnerBones.generated.h"

UENUM(BlueprintType)
enum class EOutrunnerBones : uint8 {
    Body,
    F_L_SuspensionArm,
    F_L_Steering,
    F_L_Wheel,
    F_R_SuspensionArm,
    F_R_Steering,
    F_R_Wheel,
    R_L_SuspensionArm,
    R_L_Steering,
    R_L_Wheel,
    R_R_SuspensionArm,
    R_R_Steering,
    R_R_Wheel,
    Turret_Yaw,
    F_Cannon,
    F_Cannon_Visual,
    Turret_Pitch,
    SteeringWheel,
    F_L_Spring01,
    F_L_Spring02,
    F_R_Spring01,
    F_R_Spring02,
    R_L_Spring01,
    R_L_Spring02,
    R_R_Spring01,
    R_R_Spring02,
    SeatMain,
    Count,
};

