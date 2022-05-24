#pragma once
#include "CoreMinimal.h"
#include "EWeaponUseEvent.generated.h"

UENUM(BlueprintType)
enum class EWeaponUseEvent : uint8 {
    UseStarted,
    Used,
    UseFinished,
};

