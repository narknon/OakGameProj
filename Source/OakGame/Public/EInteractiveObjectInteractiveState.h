#pragma once
#include "CoreMinimal.h"
#include "EInteractiveObjectInteractiveState.generated.h"

UENUM(BlueprintType)
enum class EInteractiveObjectInteractiveState : uint8 {
    None,
    Interactive,
    NonInteractive,
    Uninitialized,
};

