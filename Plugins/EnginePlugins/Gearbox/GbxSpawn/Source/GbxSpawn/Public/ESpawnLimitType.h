#pragma once
#include "CoreMinimal.h"
#include "ESpawnLimitType.generated.h"

UENUM(BlueprintType)
enum class ESpawnLimitType : uint8 {
    None,
    Spawner,
    SpawnerGroup,
};

