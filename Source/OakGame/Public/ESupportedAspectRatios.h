#pragma once
#include "CoreMinimal.h"
#include "ESupportedAspectRatios.generated.h"

UENUM(BlueprintType)
enum class ESupportedAspectRatios :  {
    AspectRatio_16_9,
    AspectRatio_16_10,
    AspectRatio_32_9,
    AspectRatio_21_9,
    AspectRatio_Unsupported,
    AspectRatio_MAX UMETA(Hidden),
};

