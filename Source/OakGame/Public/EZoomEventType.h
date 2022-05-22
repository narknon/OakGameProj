#pragma once
#include "CoreMinimal.h"
#include "EZoomEventType.generated.h"

UENUM(BlueprintType)
enum class EZoomEventType : uint8 {
    None,
    ZoomingIn,
    ZoomingOut,
};

