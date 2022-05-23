#pragma once
#include "CoreMinimal.h"
#include "EShadowQuality.generated.h"

UENUM(BlueprintType)
enum class EShadowQuality : uint8 {
    Low,
    Medium,
    High,
    Ultra,
};

