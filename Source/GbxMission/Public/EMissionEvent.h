#pragma once
#include "CoreMinimal.h"
#include "EMissionEvent.generated.h"

UENUM(BlueprintType)
enum class EMissionEvent : uint8 {
    NotStarted_Load,
    Active_Load,
    Complete_Load,
    Activated,
    Completed,
    Failed,
};

