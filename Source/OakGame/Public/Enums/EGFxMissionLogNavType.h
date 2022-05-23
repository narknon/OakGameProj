#pragma once
#include "CoreMinimal.h"
#include "EGFxMissionLogNavType.generated.h"

UENUM(BlueprintType)
enum class EGFxMissionLogNavType : uint8 {
    None,
    Missions,
    EchoLog,
    TyphonLog,
    EridianLog,
};

