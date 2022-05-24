#pragma once
#include "CoreMinimal.h"
#include "EDynamicToKinematicTransition.generated.h"

UENUM()
enum class EDynamicToKinematicTransition : int32 {
    NoTransition,
    RagdollLandToStandUp,
    PredictiveLanding,
    AttemptPredictiveLanding,
};

