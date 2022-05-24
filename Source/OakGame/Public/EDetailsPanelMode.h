#pragma once
#include "CoreMinimal.h"
#include "EDetailsPanelMode.generated.h"

UENUM(BlueprintType)
enum class EDetailsPanelMode : uint8 {
    Unknown,
    NoTarget,
    POIInfo,
    Challenge,
    Mission,
    PlanetOverview,
    LevelOverview,
    POIInfoPlayer,
};

