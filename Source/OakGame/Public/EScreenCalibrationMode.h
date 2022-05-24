#pragma once
#include "CoreMinimal.h"
#include "EScreenCalibrationMode.generated.h"

UENUM(BlueprintType)
enum class EScreenCalibrationMode : uint8 {
    Off,
    HDRBrightness,
    StandardBrightnessAndBlackLevel,
};

