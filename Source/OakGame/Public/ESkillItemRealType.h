#pragma once
#include "CoreMinimal.h"
#include "ESkillItemRealType.generated.h"

UENUM(BlueprintType)
enum class ESkillItemRealType : uint8 {
    None,
    PlayerAbility,
    Augment,
    AugmentSlot,
    CharacterAugment,
};

