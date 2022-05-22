#pragma once
#include "CoreMinimal.h"
#include "EWeaponUseEvent.generated.h"

UENUM(BlueprintType)
enum class EWeaponUseEvent :  {
    UseStarted,
    Used,
    UseFinished,
};

