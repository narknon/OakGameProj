#pragma once
#include "CoreMinimal.h"
#include "EInventoryAspectUsagePriority.generated.h"

UENUM(BlueprintType)
enum class EInventoryAspectUsagePriority : uint8 {
    Default,
    Low,
    Medium,
    High,
    Ultra,
    Legendary,
};

