#pragma once
#include "CoreMinimal.h"
#include "EDamageReactionEventType.generated.h"

UENUM(BlueprintType)
enum class EDamageReactionEventType : uint8 {
    Health,
    HealthPersistent,
    Damage,
    DamageOverTime,
};

