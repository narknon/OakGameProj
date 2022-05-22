#pragma once
#include "CoreMinimal.h"
#include "EWeaponZoomState.generated.h"

UENUM(BlueprintType)
enum class EWeaponZoomState : uint8 {
    NotZoomed,
    ZoomingIn,
    Zoomed,
    ZoomingOut,
};

