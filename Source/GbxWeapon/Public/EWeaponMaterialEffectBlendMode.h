#pragma once
#include "CoreMinimal.h"
#include "EWeaponMaterialEffectBlendMode.generated.h"

UENUM(BlueprintType)
enum class EWeaponMaterialEffectBlendMode : uint8 {
    Multiply,
    Add,
    Replace,
    AddReplace,
    EWAVT_MAX UMETA(Hidden),
};

