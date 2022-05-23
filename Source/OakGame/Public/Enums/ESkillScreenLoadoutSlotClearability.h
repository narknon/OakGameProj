#pragma once
#include "CoreMinimal.h"
#include "ESkillScreenLoadoutSlotClearability.generated.h"

UENUM(BlueprintType)
enum class ESkillScreenLoadoutSlotClearability :  {
    CannotClear_Error,
    CannotClear_SlotEmpty,
    CannotClear_SlotMustBeFilled,
    CannotClear_AbilityInUse,
    CanClear,
};

