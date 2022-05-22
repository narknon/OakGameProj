#pragma once
#include "CoreMinimal.h"
#include "EHUDInitializationAnimationSet.generated.h"

UENUM(BlueprintType)
enum class EHUDInitializationAnimationSet : uint8 {
    None,
    InitialSet,
    AmmoBar,
    ShieldBar,
    MissionTracker,
    GrenadeBar,
    Full,
};

