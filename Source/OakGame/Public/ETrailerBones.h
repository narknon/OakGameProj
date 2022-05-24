#pragma once
#include "CoreMinimal.h"
#include "ETrailerBones.generated.h"

UENUM(BlueprintType)
enum class ETrailerBones : uint8 {
    F_Axle,
    F_R_Wheel,
    F_L_Wheel,
    R_Axle,
    R_R_Wheel,
    R_L_Wheel,
    R_R_Spring_Axle,
    R_L_Spring_Axle,
    R_R_Spring_Body,
    R_L_Spring_Body,
    Count,
};

