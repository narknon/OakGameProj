#pragma once
#include "CoreMinimal.h"
#include "EA9KSawState.generated.h"

UENUM(BlueprintType)
enum class EA9KSawState : uint8 {
    NotStarted,
    Cooldown,
    PickTarget,
    TryToReachTarget,
    ReachedTarget,
    EquipSaw,
    WaitForQuipAnimDone,
    Anticipation,
    PrepareToShootAndShoot,
    WaitForBPCallback,
    FollowingTarget,
    Resting,
};

