#pragma once
#include "CoreMinimal.h"
#include "EWeaponReloadEvent.generated.h"

UENUM(BlueprintType)
enum class EWeaponReloadEvent :  {
    Started,
    Ended,
};

