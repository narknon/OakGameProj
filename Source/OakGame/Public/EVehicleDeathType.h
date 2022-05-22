#pragma once
#include "CoreMinimal.h"
#include "EVehicleDeathType.generated.h"

UENUM(BlueprintType)
enum class EVehicleDeathType : uint8 {
    None,
    HealthDepleted,
    FellOutOfWorld,
    DigistuctOut,
    InstantDeath,
};

