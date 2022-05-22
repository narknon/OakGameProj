#pragma once
#include "CoreMinimal.h"
#include "EAdditionalTriggeredEffectTargets.generated.h"

UENUM(BlueprintType)
enum class EAdditionalTriggeredEffectTargets : uint8 {
    None,
    MyCompanions,
    MyAllies,
};

