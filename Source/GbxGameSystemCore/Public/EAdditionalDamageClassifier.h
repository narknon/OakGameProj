#pragma once
#include "CoreMinimal.h"
#include "EAdditionalDamageClassifier.generated.h"

UENUM(BlueprintType)
enum class EAdditionalDamageClassifier : uint8 {
    None,
    BonusDamage,
    ReflectedBonusDamage,
    ConvertedDamage,
};

