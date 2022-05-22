#pragma once
#include "CoreMinimal.h"
#include "EGFxMissionLogMissionIconType.generated.h"

UENUM(BlueprintType)
enum class EGFxMissionLogMissionIconType : uint8 {
    Normal,
    Plot,
    Side,
    Contract,
    EchoLog,
    EridianWriting,
    TyphonLog,
    Complete,
    Ignored,
    Failed,
    HardMission,
};

