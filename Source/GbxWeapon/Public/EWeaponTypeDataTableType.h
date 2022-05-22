#pragma once
#include "CoreMinimal.h"
#include "EWeaponTypeDataTableType.generated.h"

UENUM(BlueprintType)
enum class EWeaponTypeDataTableType : uint8 {
    BaseWeaponBalance,
    ManufacturerDamageScale,
};

