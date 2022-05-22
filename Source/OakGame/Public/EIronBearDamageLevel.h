#pragma once
#include "CoreMinimal.h"
#include "EIronBearDamageLevel.generated.h"

UENUM(BlueprintType)
enum class EIronBearDamageLevel : uint8 {
    None,
    Light,
    Moderate,
    Heavy,
};

