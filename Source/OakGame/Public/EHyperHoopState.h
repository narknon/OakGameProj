#pragma once
#include "CoreMinimal.h"
#include "EHyperHoopState.generated.h"

UENUM(BlueprintType)
enum class EHyperHoopState : uint8 {
    Invalid,
    NotStarted,
    AttachingPawn,
    Accelerating,
    Moving,
    Deccelerating,
    DetachingPawn,
};

