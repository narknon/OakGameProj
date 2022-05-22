#pragma once
#include "CoreMinimal.h"
#include "EFrameRateLimit.generated.h"

UENUM(BlueprintType)
enum class EFrameRateLimit : uint8 {
    Smooth22_62FPS,
    Capped30FPS,
    Capped60FPS,
    Capped120FPS,
    Unlimited,
    Custom,
};

