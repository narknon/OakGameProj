#pragma once
#include "CoreMinimal.h"
#include "EVehicleCameraRelativeDrivingMode.generated.h"

UENUM(BlueprintType)
enum class EVehicleCameraRelativeDrivingMode : uint8 {
    Standard,
    ForwardOnly,
    ReverseOnly,
    Mixed,
    ForceReverse,
    ClassicBL2,
};

