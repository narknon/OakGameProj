#pragma once
#include "CoreMinimal.h"
#include "EReloadWidgetDisplayState.generated.h"

UENUM(BlueprintType)
enum class EReloadWidgetDisplayState :  {
    Default,
    AmmoLow,
    NoSpareAmmo,
    NoAmmoAtAll,
};

