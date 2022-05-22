#pragma once
#include "CoreMinimal.h"
#include "EConditionalDamageTypeBonusMode.generated.h"

UENUM(BlueprintType)
enum class EConditionalDamageTypeBonusMode : uint8 {
    AddBonusDamage,
    AddBonusDamage_BackToAttacker,
    AddBonusDamage_BackToAttackerInstigator,
    ConvertPartialDamage,
    ConvertAllDamage,
};

