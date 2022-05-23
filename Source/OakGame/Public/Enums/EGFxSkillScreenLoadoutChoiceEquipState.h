#pragma once
#include "CoreMinimal.h"
#include "EGFxSkillScreenLoadoutChoiceEquipState.generated.h"

UENUM(BlueprintType)
enum class EGFxSkillScreenLoadoutChoiceEquipState : uint8 {
    Locked,
    Available,
    Equipped,
};

