#pragma once
#include "CoreMinimal.h"
#include "EReloadWidgetDisplayState.generated.h"

UENUM(BlueprintType)
enum class EReloadWidgetDisplayState : uint8 {
    Default,
    AmmoLow,
    NoSpareAmmo,
    NoAmmoAtAll,
};

