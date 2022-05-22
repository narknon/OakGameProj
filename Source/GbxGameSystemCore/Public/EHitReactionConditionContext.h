#pragma once
#include "CoreMinimal.h"
#include "EHitReactionConditionContext.generated.h"

UENUM(BlueprintType)
enum class EHitReactionConditionContext : uint8 {
    ReceiverOwner,
    Receiver,
    CauserOwner,
    Causer,
    DamageType,
    DamageSource,
    HitRegion,
};

