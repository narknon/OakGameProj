#pragma once
#include "CoreMinimal.h"
#include "ESkillItemActionState.generated.h"

UENUM(BlueprintType)
enum class ESkillItemActionState : uint8 {
    None,
    CanEquipPrimary,
    CanEquipSecondary,
    CanEquipBoth,
    BlockedByTutorial,
    NoPointsToSpend,
    Unlock,
    AddPoint,
    Maxed,
    NotEnoughBranchPoints,
    RequiresTreeUnlock,
    RequiresOtherSkill,
};

