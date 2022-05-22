#pragma once
#include "CoreMinimal.h"
#include "EOakInputActionEventType.generated.h"

UENUM(BlueprintType)
enum class EOakInputActionEventType :  {
    None,
    Button,
    Axis,
};

