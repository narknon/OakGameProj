#pragma once
#include "CoreMinimal.h"
#include "EGbxNavState.generated.h"

UENUM(BlueprintType)
enum class EGbxNavState : uint8 {
    Idle,
    WaitingGoal,
    WaitingPath,
    Moving,
};

