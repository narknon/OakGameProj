#pragma once
#include "CoreMinimal.h"
#include "EBossbarEventType.generated.h"

UENUM(BlueprintType)
enum class EBossbarEventType : uint8 {
    Intro_Event,
    Enable_Invulnerable_Event,
    Disable_Invulnerable_Event,
    Shake_Event,
    Destroy_Event,
    NONE,
};

