#pragma once
#include "CoreMinimal.h"
#include "EAugmentTriggerOn.generated.h"

UENUM(BlueprintType)
enum class EAugmentTriggerOn : uint8 {
    TriggerOn_Filled,
    TriggerOn_NotFilled,
    TriggerOn_Depleted,
    TriggerOn_NotDepleted,
    TriggerOn_MAX UMETA(Hidden),
};

