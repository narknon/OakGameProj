#pragma once
#include "CoreMinimal.h"
#include "EGFxVehicleWeaponType.generated.h"

UENUM(BlueprintType)
enum class EGFxVehicleWeaponType : uint8 {
    CHARGE,
    MAGAZINE,
    HEAT,
    RECOVERY,
};

