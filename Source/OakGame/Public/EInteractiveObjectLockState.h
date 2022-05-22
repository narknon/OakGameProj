#pragma once
#include "CoreMinimal.h"
#include "EInteractiveObjectLockState.generated.h"

UENUM(BlueprintType)
enum class EInteractiveObjectLockState : uint8 {
    None,
    Unlocked,
    Locked,
    Uninitialized,
};

