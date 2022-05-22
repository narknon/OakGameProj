#pragma once
#include "CoreMinimal.h"
#include "EWwiseEventAction.generated.h"

UENUM(BlueprintType)
enum class EWwiseEventAction : uint8 {
    Stop,
    Pause,
    Resume,
    Break,
    ReleaseEnvelope,
};

