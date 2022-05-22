#pragma once
#include "CoreMinimal.h"
#include "EVehicleHealthState.generated.h"

UENUM(BlueprintType)
enum class EVehicleHealthState : uint8 {
    Healthy,
    Low,
    VeryLow,
    Dead,
};

