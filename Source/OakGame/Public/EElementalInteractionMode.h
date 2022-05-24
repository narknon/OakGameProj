#pragma once
#include "CoreMinimal.h"
#include "EElementalInteractionMode.generated.h"

UENUM(BlueprintType)
enum class EElementalInteractionMode : uint8 {
    Default,
    OnlyTransmit,
    OnlyReceive,
};

