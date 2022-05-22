#pragma once
#include "CoreMinimal.h"
#include "EGbxNavFlyRoundingMode.generated.h"

UENUM(BlueprintType)
enum class EGbxNavFlyRoundingMode : uint8 {
    RoundToZero,
    RoundToNearest,
};

