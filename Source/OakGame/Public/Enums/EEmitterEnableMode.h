#pragma once
#include "CoreMinimal.h"
#include "EEmitterEnableMode.generated.h"

UENUM(BlueprintType)
enum class EEmitterEnableMode : uint8 {
    EnableOnStart,
    EnableOnStartDisableOnStop,
    EnableOnStop,
    DisableOnStart,
    DisableOnStartEnableOnStop,
    DisableOnStop,
};

