#pragma once
#include "CoreMinimal.h"
#include "EVendingMachineType.generated.h"

UENUM(BlueprintType)
enum class EVendingMachineType : uint8 {
    Guns,
    Ammo,
    Health,
    CrazyEarl,
};

