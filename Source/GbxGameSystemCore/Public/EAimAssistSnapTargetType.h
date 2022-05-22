#pragma once
#include "CoreMinimal.h"
#include "EAimAssistSnapTargetType.generated.h"

UENUM(BlueprintType)
enum class EAimAssistSnapTargetType : uint8 {
    Default,
    Disabled,
    Horizontal,
    Center,
};

