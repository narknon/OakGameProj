#pragma once
#include "CoreMinimal.h"
#include "ELightProjectileTracerThrottleLevel.generated.h"

UENUM(BlueprintType)
enum class ELightProjectileTracerThrottleLevel : uint8 {
    None,
    NPC,
    RemotePlayer,
    LocalPlayer,
};

