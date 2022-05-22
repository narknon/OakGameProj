#pragma once
#include "CoreMinimal.h"
#include "EWeaponWearValueType.generated.h"

UENUM(BlueprintType)
enum class EWeaponWearValueType : uint8 {
    Wear,
    Rust,
    Dirt,
};

