#pragma once
#include "CoreMinimal.h"
#include "EWeaponChargeEventType.generated.h"

UENUM(BlueprintType)
enum class EWeaponChargeEventType : uint8 {
    BlueprintEvent,
    EnableParticleEmitter,
    DisableParticleEmitter,
};

