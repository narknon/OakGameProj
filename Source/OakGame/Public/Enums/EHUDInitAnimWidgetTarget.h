#pragma once
#include "CoreMinimal.h"
#include "EHUDInitAnimWidgetTarget.generated.h"

UENUM(BlueprintType)
enum class EHUDInitAnimWidgetTarget : uint8 {
    None,
    HealthBar,
    XPBar,
    Minimap,
    MissionTracker,
    AmmoBar,
    ShieldBar,
    GrenadeBar,
};

