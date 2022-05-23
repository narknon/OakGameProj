#pragma once
#include "CoreMinimal.h"
#include "ESpeedModifierOverridePriority.generated.h"

UENUM(BlueprintType)
enum class ESpeedModifierOverridePriority : uint8 {
    AINode,
    Aspect,
    Scripted,
    Escort,
    UserEdge,
    Count,
    Invalid,
};

