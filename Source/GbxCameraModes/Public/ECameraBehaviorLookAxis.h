#pragma once
#include "CoreMinimal.h"
#include "ECameraBehaviorLookAxis.generated.h"

UENUM(BlueprintType)
enum class ECameraBehaviorLookAxis : uint8 {
    Pitch,
    Yaw,
    Roll,
    MAX,
};

