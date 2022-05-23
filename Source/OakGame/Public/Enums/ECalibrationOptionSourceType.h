#pragma once
#include "CoreMinimal.h"
#include "ECalibrationOptionSourceType.generated.h"

UENUM(BlueprintType)
enum class ECalibrationOptionSourceType :  {
    COST_FromPlayerController,
    COST_FromRecent,
    COST_FromDefaults,
    COST_MAX UMETA(Hidden),
};

