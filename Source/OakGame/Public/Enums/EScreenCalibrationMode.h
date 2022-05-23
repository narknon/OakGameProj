#pragma once
#include "CoreMinimal.h"
#include "EScreenCalibrationMode.generated.h"

UENUM(BlueprintType)
enum class EScreenCalibrationMode :  {
    Off,
    HDRBrightness,
    StandardBrightnessAndBlackLevel,
};

