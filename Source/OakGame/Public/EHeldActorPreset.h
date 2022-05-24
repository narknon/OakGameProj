#pragma once
#include "CoreMinimal.h"
#include "EHeldActorPreset.generated.h"

UENUM(BlueprintType)
enum class EHeldActorPreset : uint8 {
    Explosive,
    Melee,
    Shield,
};

