#pragma once
#include "CoreMinimal.h"
#include "EDrivingButtonScheme.generated.h"

UENUM(BlueprintType)
enum class EDrivingButtonScheme : uint8 {
    Classic,
    CameraRelative,
    VehicleRelative,
    VehicleRelativeStick,
    Count,
};

