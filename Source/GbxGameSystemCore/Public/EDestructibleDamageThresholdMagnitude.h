#pragma once
#include "CoreMinimal.h"
#include "EDestructibleDamageThresholdMagnitude.generated.h"

UENUM(BlueprintType)
enum class EDestructibleDamageThresholdMagnitude : uint8 {
    Low,
    Medium,
    High,
    Legacy,
};

