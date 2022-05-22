#pragma once
#include "CoreMinimal.h"
#include "EMissionObjectiveSetEvent.generated.h"

UENUM(BlueprintType)
enum class EMissionObjectiveSetEvent : uint8 {
    NotStarted_Load,
    Active_Load,
    Complete_Load,
    Activated,
    ObjectivesChanged,
    Completed,
    Advanced,
};

