#pragma once
#include "CoreMinimal.h"
#include "ELightBeamFlag.generated.h"

UENUM(BlueprintType)
enum class ELightBeamFlag : uint8 {
    ViewDependent,
    Locked,
    FollowViewPoint,
    DisableChaining,
    LagCompensation,
    EngineFlag3,
    EngineFlag4,
    EngineFlag5,
    EngineFlag6,
    EngineFlag7,
    EngineFlag8,
    GameFlag1,
    GameFlag2,
    GameFlag3,
    GameFlag4,
};

