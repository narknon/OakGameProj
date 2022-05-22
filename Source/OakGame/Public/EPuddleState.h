#pragma once
#include "CoreMinimal.h"
#include "EPuddleState.generated.h"

UENUM(BlueprintType)
enum class EPuddleState : uint8 {
    Spawning,
    Idle,
    CleaningUp,
    CleanedUp,
};

