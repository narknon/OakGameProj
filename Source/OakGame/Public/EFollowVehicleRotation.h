#pragma once
#include "CoreMinimal.h"
#include "EFollowVehicleRotation.generated.h"

UENUM(BlueprintType)
enum class EFollowVehicleRotation : uint8 {
    None,
    Yaw,
    YawAndPitch,
};

