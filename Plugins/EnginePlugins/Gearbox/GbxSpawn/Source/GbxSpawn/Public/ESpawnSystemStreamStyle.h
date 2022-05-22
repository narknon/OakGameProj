#pragma once
#include "CoreMinimal.h"
#include "ESpawnSystemStreamStyle.generated.h"

UENUM(BlueprintType)
enum class ESpawnSystemStreamStyle : uint8 {
    MapStartSynchronous,
    MapStartAsynchronous,
};

