#pragma once
#include "CoreMinimal.h"
#include "EGbxInputEvent_Button_PressPulse_Events.generated.h"

UENUM(BlueprintType)
enum class EGbxInputEvent_Button_PressPulse_Events : uint8 {
    Pressed,
    InitialPulse,
    Pulse,
    Released,
    EGbxInputEvent_Button_PressPulse_MAX UMETA(Hidden),
};

