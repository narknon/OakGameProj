#pragma once
#include "CoreMinimal.h"
#include "EHitRegionDamageRule.generated.h"

UENUM(BlueprintType)
enum class EHitRegionDamageRule : uint8 {
    IndependentHealth,
    OwnerHealth_DamageCap,
    OwnerHealth_NoDamageCap,
};

