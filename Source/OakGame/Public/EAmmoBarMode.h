#pragma once
#include "CoreMinimal.h"
#include "EAmmoBarMode.generated.h"

UENUM(BlueprintType)
enum class EAmmoBarMode : uint8 {
    None,
    NoMode,
    ModeSwitch,
    COV,
    EridianFabricator,
};

