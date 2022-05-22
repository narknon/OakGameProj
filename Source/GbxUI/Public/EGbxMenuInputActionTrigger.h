#pragma once
#include "CoreMinimal.h"
#include "EGbxMenuInputActionTrigger.generated.h"

UENUM(BlueprintType)
enum class EGbxMenuInputActionTrigger : uint8 {
    Pressed,
    Held,
    HeldLong,
    Released,
};

