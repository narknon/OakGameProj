#pragma once
#include "CoreMinimal.h"
#include "EVaultRewardType.generated.h"

UENUM(BlueprintType)
enum class EVaultRewardType : uint8 {
    None,
    EridianAnalyser,
    EridianResonator,
    ArtifactSlot,
    EridianFabricator,
    MayhemMode,
};

