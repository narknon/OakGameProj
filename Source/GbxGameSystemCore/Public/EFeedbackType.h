#pragma once
#include "CoreMinimal.h"
#include "EFeedbackType.generated.h"

UENUM(BlueprintType)
enum class EFeedbackType :  {
    Ranged,
    Directional,
    RandomRumble,
    Continuous,
    RandomShake,
    EFeedbackType_MAX = 0xFF,
};

