#pragma once
#include "CoreMinimal.h"
#include "EWeaponInputChannel.generated.h"

UENUM(BlueprintType)
enum class EWeaponInputChannel : uint8 {
    Channel1,
    Channel2,
    EWeaponInputChannel_MAX = 0xFF,
};

