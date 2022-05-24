#pragma once
#include "CoreMinimal.h"
#include "ESkillScreenLoadoutSlotClearability.generated.h"

UENUM(BlueprintType)
enum class ESkillScreenLoadoutSlotClearability : uint8 {
    CannotClear_Error,
    CannotClear_SlotEmpty,
    CannotClear_SlotMustBeFilled,
    CannotClear_AbilityInUse,
    CanClear,
};

