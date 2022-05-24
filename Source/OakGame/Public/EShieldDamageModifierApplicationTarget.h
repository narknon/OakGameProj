#pragma once
#include "CoreMinimal.h"
#include "EShieldDamageModifierApplicationTarget.generated.h"

UENUM(BlueprintType)
enum class EShieldDamageModifierApplicationTarget : uint8 {
    InstigatorCausedDamage,
    InstigatorReceivedDamage,
};

