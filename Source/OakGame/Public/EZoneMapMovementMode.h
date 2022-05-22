#pragma once
#include "CoreMinimal.h"
#include "EZoneMapMovementMode.generated.h"

UENUM(BlueprintType)
enum class EZoneMapMovementMode : uint8 {
    Direct,
    Interpolate,
    Animate,
};

