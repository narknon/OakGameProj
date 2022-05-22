#pragma once
#include "CoreMinimal.h"
#include "ECrosshairState.generated.h"

UENUM(BlueprintType)
enum class ECrosshairState :  {
    NORMAL,
    ACTION_SKILL,
    SPRINTING,
    MELEE,
};

