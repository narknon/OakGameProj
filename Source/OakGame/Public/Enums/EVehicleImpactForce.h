#pragma once
#include "CoreMinimal.h"
#include "EVehicleImpactForce.generated.h"

UENUM(BlueprintType)
enum class EVehicleImpactForce : uint8 {
    Unknown,
    Grinding,
    VerySmall,
    Small,
    Medium,
    Heavy,
    Count,
};

