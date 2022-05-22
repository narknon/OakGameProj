#pragma once
#include "CoreMinimal.h"
#include "EGFxMissionTrackerAnimationType.generated.h"

UENUM(BlueprintType)
enum class EGFxMissionTrackerAnimationType : uint8 {
    None,
    Active,
    SlideIn,
    SlideInChecked,
    SlideOut,
    SlideInFromAbove,
    SlideInFromAboveChecked,
    SlideInFromBelow,
    SlideInFromBelowChecked,
    Checked,
    CheckedFailed,
    Failed,
    SlideOutFailed,
};

