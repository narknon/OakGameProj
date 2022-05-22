#pragma once
#include "CoreMinimal.h"
#include "EVehicleDriveType.generated.h"

UENUM(BlueprintType)
enum class EVehicleDriveType : uint8 {
    Wheel4,
    WheelN,
    WheelNNoDrive,
    Tank,
};

