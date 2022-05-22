#pragma once
#include "CoreMinimal.h"
#include "EWeaponEquipType.generated.h"

UENUM(BlueprintType)
enum class EWeaponEquipType : uint8 {
    Default,
    Instant,
    Custom,
};

