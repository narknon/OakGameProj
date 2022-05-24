#pragma once
#include "CoreMinimal.h"
#include "EOakMissionType.generated.h"

UENUM(BlueprintType)
enum class EOakMissionType : uint8 {
    Default,
    Plot,
    Side,
    ProvingGrounds,
    CircleOfSlaughter,
    Raid,
    RareSpawn,
    Count,
};

