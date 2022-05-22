#pragma once
#include "CoreMinimal.h"
#include "EWeaponActionChannel.generated.h"

UENUM(BlueprintType)
enum class EWeaponActionChannel : uint8 {
    Use,
    Zoom,
    Reload,
    Other,
};

