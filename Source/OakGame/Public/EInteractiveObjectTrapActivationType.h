#pragma once
#include "CoreMinimal.h"
#include "EInteractiveObjectTrapActivationType.generated.h"

UENUM(BlueprintType)
enum class EInteractiveObjectTrapActivationType : uint8 {
    ActivateTrap,
    DeactivateTrap,
};

