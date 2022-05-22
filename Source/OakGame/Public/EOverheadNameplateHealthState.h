#pragma once
#include "CoreMinimal.h"
#include "EOverheadNameplateHealthState.generated.h"

UENUM(BlueprintType)
enum class EOverheadNameplateHealthState : uint8 {
    Healthy,
    Dying,
    BeingRevived,
    Respawning,
};

