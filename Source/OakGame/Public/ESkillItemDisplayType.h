#pragma once
#include "CoreMinimal.h"
#include "ESkillItemDisplayType.generated.h"

UENUM(BlueprintType)
enum class ESkillItemDisplayType : uint8 {
    None,
    ActionSkill,
    ModPrimary,
    ModSecondary,
    Passive,
    ClassAbility,
};

