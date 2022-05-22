#pragma once
#include "CoreMinimal.h"
#include "EWeaponSkeletalControlEvent.generated.h"

UENUM(BlueprintType)
enum class EWeaponSkeletalControlEvent : uint8 {
    Pause,
    Resume,
    Reset,
    CacheState,
    RestoreState,
    CacheStateAndReset,
    ResetAndPause,
    SetInput,
    AddInput,
    ReturnToDefault,
};

