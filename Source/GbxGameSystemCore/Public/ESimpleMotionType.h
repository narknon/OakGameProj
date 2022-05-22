#pragma once
#include "CoreMinimal.h"
#include "ESimpleMotionType.generated.h"

UENUM(BlueprintType)
enum class ESimpleMotionType : uint8 {
    None,
    ScaleByValue,
    Interpolate,
    Loop,
    Alternate,
};

