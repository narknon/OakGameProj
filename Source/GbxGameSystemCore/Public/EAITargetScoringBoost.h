#pragma once
#include "CoreMinimal.h"
#include "EAITargetScoringBoost.generated.h"

UENUM(BlueprintType)
enum class EAITargetScoringBoost : uint8 {
    ReduceExtreme,
    ReduceModerate,
    ReduceLight,
    NoBoost,
    AmplifyLight,
    AmplifyModerate,
    AmplifyExtreme,
    MAX,
};

