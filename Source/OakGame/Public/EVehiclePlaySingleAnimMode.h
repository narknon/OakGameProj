#pragma once
#include "CoreMinimal.h"
#include "EVehiclePlaySingleAnimMode.generated.h"

UENUM(BlueprintType)
enum class EVehiclePlaySingleAnimMode : uint8 {
    PlayOnStart,
    PlayOnStop,
};

