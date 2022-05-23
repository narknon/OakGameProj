#pragma once
#include "CoreMinimal.h"
#include "EMatchmakingRequirementType.generated.h"

UENUM(BlueprintType)
enum class EMatchmakingRequirementType : uint8 {
    None,
    PlayerLevel,
    PlotMission,
    DlcInstalled,
};

