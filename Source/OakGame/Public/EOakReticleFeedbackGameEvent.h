#pragma once
#include "CoreMinimal.h"
#include "EOakReticleFeedbackGameEvent.generated.h"

UENUM(BlueprintType)
enum class EOakReticleFeedbackGameEvent : uint8 {
    None,
    DamageCaused,
    DeathCaused,
};

