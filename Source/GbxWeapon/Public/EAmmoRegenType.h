#pragma once
#include "CoreMinimal.h"
#include "EAmmoRegenType.generated.h"

UENUM(BlueprintType)
enum class EAmmoRegenType : uint8 {
    Disabled,
    GenerateAmmo,
    RefillLoadedAmmo,
};

