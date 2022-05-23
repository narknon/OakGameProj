#pragma once
#include "CoreMinimal.h"
#include "EOakElementalType.generated.h"

UENUM(BlueprintType)
enum class EOakElementalType : uint8 {
    None,
    Corrosive,
    Cryo,
    Fire,
    Shock,
    Radiation,
    MAX,
};

