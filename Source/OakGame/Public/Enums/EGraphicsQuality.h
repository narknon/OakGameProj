#pragma once
#include "CoreMinimal.h"
#include "EGraphicsQuality.generated.h"

UENUM(BlueprintType)
enum class EGraphicsQuality : uint8 {
    VeryLow,
    Low,
    Medium,
    High,
    Ultra,
    Badass,
    Undefined,
};

