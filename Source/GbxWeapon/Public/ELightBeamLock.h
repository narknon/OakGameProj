#pragma once
#include "CoreMinimal.h"
#include "ELightBeamLock.generated.h"

UENUM(BlueprintType)
enum class ELightBeamLock : uint8 {
    Never,
    Always,
    LockOn,
};

