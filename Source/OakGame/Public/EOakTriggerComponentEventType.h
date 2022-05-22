#pragma once
#include "CoreMinimal.h"
#include "EOakTriggerComponentEventType.generated.h"

UENUM(BlueprintType)
enum class EOakTriggerComponentEventType : uint8 {
    Touch,
    UnTouch,
};

