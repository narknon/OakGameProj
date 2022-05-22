#pragma once
#include "CoreMinimal.h"
#include "ECriticalHitDamageOverride.generated.h"

UENUM(BlueprintType)
enum class ECriticalHitDamageOverride : uint8 {
    None,
    ForceCrit,
    ForceNotCrit,
};

