#pragma once
#include "CoreMinimal.h"
#include "ECanReRollInventoryResult.generated.h"

UENUM(BlueprintType)
enum class ECanReRollInventoryResult : uint8 {
    Yes,
    CantAfford,
    No,
};

