#pragma once
#include "CoreMinimal.h"
#include "ENavAnimState.generated.h"

UENUM(BlueprintType)
enum class ENavAnimState : uint8 {
    None,
    Idle,
    Hop,
    Start,
    Move,
    Stop,
    TurnIdle,
    TurnMoving,
    TurnBlend,
    Max,
};

