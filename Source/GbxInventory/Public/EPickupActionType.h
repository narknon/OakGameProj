#pragma once
#include "CoreMinimal.h"
#include "EPickupActionType.generated.h"

UENUM(BlueprintType)
enum class EPickupActionType : uint8 {
    OnUseOrTouch,
    OnUseOnly,
    OnTouchOnly,
};

