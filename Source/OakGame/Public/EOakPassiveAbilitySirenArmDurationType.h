#pragma once
#include "CoreMinimal.h"
#include "EOakPassiveAbilitySirenArmDurationType.generated.h"

UENUM(BlueprintType)
enum class EOakPassiveAbilitySirenArmDurationType : uint8 {
    None,
    AbilityState,
    AbilityTimer,
    StatusEffect,
};

