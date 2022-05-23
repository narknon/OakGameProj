#pragma once
#include "CoreMinimal.h"
#include "EDuelTotemDestroyReason.generated.h"

UENUM(BlueprintType)
enum class EDuelTotemDestroyReason : uint8 {
    None,
    TimedOut,
    Canceled,
    DuelFinished,
};

