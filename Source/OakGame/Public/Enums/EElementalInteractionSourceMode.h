#pragma once
#include "CoreMinimal.h"
#include "EElementalInteractionSourceMode.generated.h"

UENUM(BlueprintType)
enum class EElementalInteractionSourceMode : uint8 {
    Default,
    Always,
    Never,
    OnlyThroughBlueprint,
};

