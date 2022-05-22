#pragma once
#include "CoreMinimal.h"
#include "EWeaponAudioBodyLoopState.generated.h"

UENUM(BlueprintType)
enum class EWeaponAudioBodyLoopState :  {
    Active,
    Equipping,
    Reloading,
    Invalid,
};

