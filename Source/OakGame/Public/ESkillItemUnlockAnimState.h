#pragma once
#include "CoreMinimal.h"
#include "ESkillItemUnlockAnimState.generated.h"

UENUM(BlueprintType)
enum class ESkillItemUnlockAnimState :  {
    Uninitialized,
    Unplayed,
    Played,
};

