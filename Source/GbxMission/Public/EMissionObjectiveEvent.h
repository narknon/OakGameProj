#pragma once
#include "CoreMinimal.h"
#include "EMissionObjectiveEvent.generated.h"

UENUM(BlueprintType)
enum class EMissionObjectiveEvent : uint8 {
    Inactive_Load,
    Active_Load,
    Dormant_Load,
    Complete_Load,
    Activated,
    Deactivated,
    Dormant,
    Cleared,
    Updated,
    Thwarted,
    Completed,
};

