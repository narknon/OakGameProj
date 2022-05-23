#pragma once
#include "CoreMinimal.h"
#include "EOakActionAbilitySecondaryUseActionType.generated.h"

UENUM(BlueprintType)
enum class EOakActionAbilitySecondaryUseActionType : uint8 {
    None,
    Primary,
    Secondary,
};

