#pragma once
#include "CoreMinimal.h"
#include "EAmmoBarMode.generated.h"

UENUM(BlueprintType)
enum class EAmmoBarMode :  {
    None,
    NoMode,
    ModeSwitch,
    COV,
    EridianFabricator,
};

