#pragma once
#include "CoreMinimal.h"
#include "ECrosshairState.generated.h"

UENUM(BlueprintType)
enum class ECrosshairState : uint8 {
    NORMAL,
    ACTION_SKILL,
    SPRINTING,
    MELEE,
};

