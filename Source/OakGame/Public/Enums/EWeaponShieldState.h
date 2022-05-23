#pragma once
#include "CoreMinimal.h"
#include "EWeaponShieldState.generated.h"

UENUM(BlueprintType)
enum class EWeaponShieldState : uint8 {
    Normal,
    Depleted,
};

