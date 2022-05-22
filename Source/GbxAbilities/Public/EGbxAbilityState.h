#pragma once
#include "CoreMinimal.h"
#include "EGbxAbilityState.generated.h"

UENUM(BlueprintType)
enum class EGbxAbilityState : uint8 {
    Unactivated,
    Deactivated,
    Paused,
    Active,
};

