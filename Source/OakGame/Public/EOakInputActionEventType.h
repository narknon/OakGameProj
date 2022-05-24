#pragma once
#include "CoreMinimal.h"
#include "EOakInputActionEventType.generated.h"

UENUM(BlueprintType)
enum class EOakInputActionEventType : uint8 {
    None,
    Button,
    Axis,
};

