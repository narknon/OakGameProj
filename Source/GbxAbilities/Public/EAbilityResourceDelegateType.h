#pragma once
#include "CoreMinimal.h"
#include "EAbilityResourceDelegateType.generated.h"

UENUM(BlueprintType)
enum class EAbilityResourceDelegateType : uint8 {
    None,
    OnResourceNowDepleted,
    OnResourceNowNotDepleted,
    OnResourceNowFilled,
    OnResourceNowNotFilled,
    OnResourceNowRegenerating,
    OnResourceNowNotRegenerating,
    OnResourceNowDepleting,
    OnResourceNowNotDepleting,
    OnResourceNowIdle,
};

