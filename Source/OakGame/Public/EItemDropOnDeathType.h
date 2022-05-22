#pragma once
#include "CoreMinimal.h"
#include "EItemDropOnDeathType.generated.h"

UENUM(BlueprintType)
enum class EItemDropOnDeathType : uint8 {
    DropOnDeath_All,
    DropOnDeath_FirstDeath,
    DropOnDeath_LastDeath,
    DropOnDeath_RandomDeath,
    DropOnDeath_MAX UMETA(Hidden),
};

