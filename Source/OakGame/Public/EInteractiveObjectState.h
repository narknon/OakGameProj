#pragma once
#include "CoreMinimal.h"
#include "EInteractiveObjectState.generated.h"

UENUM(BlueprintType)
enum class EInteractiveObjectState : uint8 {
    None,
    Enabling,
    Enabled,
    Disabling,
    Disabled,
    Locked,
    Uninitialized,
};

