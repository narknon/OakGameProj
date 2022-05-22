#pragma once
#include "CoreMinimal.h"
#include "EWeaponTextureMipsSetting.generated.h"

UENUM(BlueprintType)
enum class EWeaponTextureMipsSetting : uint8 {
    Default,
    High,
    VeryHigh,
};

