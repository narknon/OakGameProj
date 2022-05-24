#pragma once
#include "CoreMinimal.h"
#include "EWeaponAudioBodyLoopState.generated.h"

UENUM(BlueprintType)
enum class EWeaponAudioBodyLoopState : uint8 {
    Active,
    Equipping,
    Reloading,
    Invalid,
};

