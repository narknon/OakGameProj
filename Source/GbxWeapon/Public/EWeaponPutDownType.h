#pragma once
#include "CoreMinimal.h"
#include "EWeaponPutDownType.generated.h"

UENUM(BlueprintType)
enum class EWeaponPutDownType : uint8 {
    Default,
    Instant,
};

