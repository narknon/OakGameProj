#pragma once
#include "CoreMinimal.h"
#include "ECameraBehaviorLookAxis.generated.h"

UENUM(BlueprintType)
enum class ECameraBehaviorLookAxis :  {
    Pitch,
    Yaw,
    Roll,
    MAX,
};

