#pragma once
#include "CoreMinimal.h"
#include "EIronBearExitReason.generated.h"

UENUM(BlueprintType)
enum class EIronBearExitReason : uint8 {
    Undefined,
    ActionSkillStopped,
    ManualExit,
    Died,
    FellOutOfWorld,
    EmergencyExit,
};

