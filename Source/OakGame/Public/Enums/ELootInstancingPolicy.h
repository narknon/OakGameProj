#pragma once
#include "CoreMinimal.h"
#include "ELootInstancingPolicy.generated.h"

UENUM(BlueprintType)
enum class ELootInstancingPolicy : uint8 {
    Instance,
    DontInstance,
    InstanceForPlayer,
};

