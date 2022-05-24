#pragma once
#include "CoreMinimal.h"
#include "EEchoDeviceFXPositionMode.generated.h"

UENUM(BlueprintType)
enum class EEchoDeviceFXPositionMode : uint8 {
    None,
    UIObject,
    ViewportPosition,
};

