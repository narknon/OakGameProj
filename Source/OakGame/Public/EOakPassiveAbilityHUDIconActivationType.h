#pragma once
#include "CoreMinimal.h"
#include "EOakPassiveAbilityHUDIconActivationType.generated.h"

UENUM(BlueprintType)
enum class EOakPassiveAbilityHUDIconActivationType : uint8 {
    TriggeredEffect,
    StatusEffect,
    AbilityTimer,
    Manual,
    ActiveState,
};

