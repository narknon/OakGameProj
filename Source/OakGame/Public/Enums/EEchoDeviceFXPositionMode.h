#pragma once
#include "CoreMinimal.h"
#include "EEchoDeviceFXPositionMode.generated.h"

UENUM(BlueprintType)
enum class EEchoDeviceFXPositionMode :  {
    None,
    UIObject,
    ViewportPosition,
};

