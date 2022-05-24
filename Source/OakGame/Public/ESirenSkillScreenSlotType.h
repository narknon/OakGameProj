#pragma once
#include "CoreMinimal.h"
#include "ESirenSkillScreenSlotType.generated.h"

UENUM(BlueprintType)
enum class ESirenSkillScreenSlotType : uint8 {
    None,
    ComboAbility,
    ComboEffect,
    ComboElement,
    Passive,
};

