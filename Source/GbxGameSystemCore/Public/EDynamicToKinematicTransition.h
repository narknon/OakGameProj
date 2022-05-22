#pragma once
#include "CoreMinimal.h"
#include "EDynamicToKinematicTransition.generated.h"

UENUM(BlueprintType)
enum class EDynamicToKinematicTransition : int32 {
    NoTransition,
    RagdollLandToStandUp,
    PredictiveLanding,
    AttemptPredictiveLanding,
};

