#pragma once
#include "CoreMinimal.h"
#include "ECSTweenEasingFunc.generated.h"

UENUM(BlueprintType)
enum class ECSTweenEasingFunc : uint8 {
    Linear,
    SmoothStep,
    EaseInBack,
    EaseOutBack,
    EaseInSine,
    EaseOutSine,
    Sine,
};

