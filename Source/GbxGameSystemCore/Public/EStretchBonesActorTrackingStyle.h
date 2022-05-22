#pragma once
#include "CoreMinimal.h"
#include "EStretchBonesActorTrackingStyle.generated.h"

UENUM(BlueprintType)
enum class EStretchBonesActorTrackingStyle : uint8 {
    FirstFrame,
    PredictedFirstFrame,
    Track,
    TrackUntilNotify,
    NavEntry,
    NavExit,
    NavMidpoint,
};

