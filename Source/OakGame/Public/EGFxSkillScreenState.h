#pragma once
#include "CoreMinimal.h"
#include "EGFxSkillScreenState.generated.h"

UENUM(BlueprintType)
enum class EGFxSkillScreenState : uint8 {
    None,
    BranchesFocused,
    LoadoutEdit,
    PlayingUnlockAnim,
    TreeLocked_Info,
    TreeLocked_Branches,
    DraggingSkillItem,
};

