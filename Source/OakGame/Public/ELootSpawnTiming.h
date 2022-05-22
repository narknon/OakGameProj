#pragma once
#include "CoreMinimal.h"
#include "ELootSpawnTiming.generated.h"

UENUM(BlueprintType)
enum class ELootSpawnTiming : uint8 {
    OnEnabled,
    OnEnabling,
    OnAnimNotify,
};

