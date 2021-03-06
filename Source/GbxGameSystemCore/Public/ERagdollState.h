#pragma once
#include "CoreMinimal.h"
#include "ERagdollState.generated.h"

UENUM(BlueprintType)
enum class ERagdollState : uint8 {
    Start,
    Anim,
    Ragdoll,
    IdlePoseDriving,
    StartBlend,
    Blend,
    Getup,
    Done,
};

