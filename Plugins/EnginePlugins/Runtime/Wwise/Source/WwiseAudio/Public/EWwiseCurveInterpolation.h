#pragma once
#include "CoreMinimal.h"
#include "EWwiseCurveInterpolation.generated.h"

UENUM(BlueprintType)
enum class EWwiseCurveInterpolation : uint8 {
    Log3,
    Sine,
    Log1,
    InvSCurve,
    Linear,
    SCurve,
    Exp1,
    SineRecip,
    Exp3,
};

