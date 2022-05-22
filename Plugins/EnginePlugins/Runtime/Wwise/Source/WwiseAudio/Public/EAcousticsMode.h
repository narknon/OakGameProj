#pragma once
#include "CoreMinimal.h"
#include "EAcousticsMode.generated.h"

UENUM(BlueprintType)
enum class EAcousticsMode : uint8 {
    Disabled,
    Enabled,
    EnabledUnconditionalSampleMode,
    EnabledOmnidirectional,
    UsePlayerLocationForAcoustics,
};

