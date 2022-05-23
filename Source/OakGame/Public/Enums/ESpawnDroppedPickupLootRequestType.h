#pragma once
#include "CoreMinimal.h"
#include "ESpawnDroppedPickupLootRequestType.generated.h"

UENUM(BlueprintType)
enum class ESpawnDroppedPickupLootRequestType : uint8 {
    Drop,
    Attach,
};

