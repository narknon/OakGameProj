#pragma once
#include "CoreMinimal.h"
#include "EWeaponShieldActivationTrigger.generated.h"

UENUM(BlueprintType)
enum class EWeaponShieldActivationTrigger : uint8 {
    Zoom,
    Attach,
    Custom,
};

