#pragma once
#include "CoreMinimal.h"
#include "EConditionalAreaDamageFilter.generated.h"

UENUM(BlueprintType)
enum class EConditionalAreaDamageFilter : uint8 {
    MustNotBeRadiusDamage,
    MustBeRadiusDamage,
};

