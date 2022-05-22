#pragma once
#include "CoreMinimal.h"
#include "EDuelLoseReason.generated.h"

UENUM(BlueprintType)
enum class EDuelLoseReason : uint8 {
    None,
    PlayerKilled,
    PlayerQuit,
    OutOfBounds,
};

