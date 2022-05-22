#pragma once
#include "CoreMinimal.h"
#include "ESpawnCostSelection.generated.h"

UENUM(BlueprintType)
enum class ESpawnCostSelection : uint8 {
    Preset,
    Custom,
};

