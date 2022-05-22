#pragma once
#include "CoreMinimal.h"
#include "ESkillItemRealType.generated.h"

UENUM(BlueprintType)
enum class ESkillItemRealType :  {
    None,
    PlayerAbility,
    Augment,
    AugmentSlot,
    CharacterAugment,
};

