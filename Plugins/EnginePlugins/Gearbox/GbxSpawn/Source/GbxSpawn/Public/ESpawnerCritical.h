#pragma once
#include "CoreMinimal.h"
#include "ESpawnerCritical.generated.h"

UENUM(BlueprintType)
enum class ESpawnerCritical : uint8 {
    NotCritical,
    AlwaysSpawn,
    Critical,
};

