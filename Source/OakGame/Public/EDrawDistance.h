#pragma once
#include "CoreMinimal.h"
#include "EDrawDistance.generated.h"

UENUM(BlueprintType)
enum class EDrawDistance : uint8 {
    Low,
    Medium,
    High,
    Ultra,
};

