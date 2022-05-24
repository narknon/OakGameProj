#pragma once
#include "CoreMinimal.h"
#include "EOakActionAbilityStopAction.generated.h"

UENUM(BlueprintType)
enum class EOakActionAbilityStopAction : uint8 {
    Normal,
    Expidited,
    Abort,
};

