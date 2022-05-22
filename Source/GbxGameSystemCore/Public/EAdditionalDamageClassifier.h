#pragma once
#include "CoreMinimal.h"
#include "EAdditionalDamageClassifier.generated.h"

UENUM(BlueprintType)
enum class EAdditionalDamageClassifier :  {
    None,
    BonusDamage,
    ReflectedBonusDamage,
    ConvertedDamage,
};

