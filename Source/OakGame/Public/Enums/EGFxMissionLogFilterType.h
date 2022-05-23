#pragma once
#include "CoreMinimal.h"
#include "EGFxMissionLogFilterType.generated.h"

UENUM(BlueprintType)
enum class EGFxMissionLogFilterType : uint8 {
    None,
    MissionLogMissionType,
    MissionLogByExpansion,
    MissionLogByRegion,
};

