#pragma once
#include "CoreMinimal.h"
#include "EGbxFeedbackType.generated.h"

UENUM(BlueprintType)
enum class EGbxFeedbackType :  {
    Ranged = 0x1,
    Directional,
    RandomRumble = 0x4,
    Continuous = 0x8,
    RandomShake = 0x10,
    EFeedbackType_MAX = 0xFF,
};

