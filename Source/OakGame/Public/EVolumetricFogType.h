#pragma once
#include "CoreMinimal.h"
#include "EVolumetricFogType.generated.h"

UENUM(BlueprintType)
enum class EVolumetricFogType : uint8 {
    Off,
    Medium,
    High,
    Ultra,
};

