#pragma once
#include "CoreMinimal.h"
#include "ESirenSkillScreenSlotType.generated.h"

UENUM(BlueprintType)
enum class ESirenSkillScreenSlotType :  {
    None,
    ComboAbility,
    ComboEffect,
    ComboElement,
    Passive,
};

