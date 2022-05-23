#pragma once
#include "CoreMinimal.h"
#include "EPlayerExperienceSource.generated.h"

UENUM(BlueprintType)
enum class EPlayerExperienceSource : uint8 {
    XPUnknown,
    XPCombat,
    PlotMissionAward,
    Discovery,
    SideMissionAward,
    SaveGame,
};

