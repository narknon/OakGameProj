#pragma once
#include "CoreMinimal.h"
#include "EDamageSurfaceType.generated.h"

UENUM(BlueprintType)
enum class EDamageSurfaceType : uint8 {
    Default,
    Flesh,
    Armor,
    Shield,
};

