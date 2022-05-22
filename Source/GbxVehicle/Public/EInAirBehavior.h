#pragma once
#include "CoreMinimal.h"
#include "EInAirBehavior.generated.h"

UENUM(BlueprintType)
enum class EInAirBehavior : uint8 {
    Continue,
    Pause,
    Stop,
};

