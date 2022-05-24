#pragma once
#include "CoreMinimal.h"
#include "EGbxInputEvent_Button_PressHoldRelease_Events.generated.h"

UENUM(BlueprintType)
enum class EGbxInputEvent_Button_PressHoldRelease_Events : uint8 {
    Pressed,
    Held,
    Released,
    EGbxInputEvent_Button_PressHoldRelease_MAX UMETA(Hidden),
};

