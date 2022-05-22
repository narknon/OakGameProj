#pragma once
#include "CoreMinimal.h"
#include "ELightProjectileFlag.generated.h"

UENUM(BlueprintType)
enum class ELightProjectileFlag : uint8 {
    OverrideStartRotation,
    Homing,
    StartFromLocalSource,
    BounceTowardsEnemy,
    Magnetism,
    Reflected,
    Penetrated,
    HideTracer,
    LagCompensation,
    TargetActorSet,
    DisableTracerThrottling,
    EngineFlag1,
    GameFlag1,
    GameFlag2,
    GameFlag3,
    GameFlag4,
};

