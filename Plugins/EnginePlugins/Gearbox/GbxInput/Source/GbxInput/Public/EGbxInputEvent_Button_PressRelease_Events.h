#pragma once
#include "CoreMinimal.h"
#include "EGbxInputEvent_Button_PressRelease_Events.generated.h"

UENUM(BlueprintType)
enum class EGbxInputEvent_Button_PressRelease_Events :  {
    Pressed,
    Released,
    EGbxInputEvent_Button_PressRelease_MAX UMETA(Hidden),
};

