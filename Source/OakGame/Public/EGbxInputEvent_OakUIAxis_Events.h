#pragma once
#include "CoreMinimal.h"
#include "EGbxInputEvent_OakUIAxis_Events.generated.h"

UENUM(BlueprintType)
enum class EGbxInputEvent_OakUIAxis_Events :  {
    Pressed,
    Held,
    Released,
    EGbxInputEvent_OakUIAxis_MAX UMETA(Hidden),
};

