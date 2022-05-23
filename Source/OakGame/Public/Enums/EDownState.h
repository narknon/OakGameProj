#pragma once
#include "CoreMinimal.h"
#include "EDownState.generated.h"

UENUM(BlueprintType)
enum class EDownState : uint8 {
    DownState_Healthy,
    DownState_Down,
    DownState_DownAndExerting,
    DownState_Resurrecting,
    DownState_GivingUp,
    DownState_MAX UMETA(Hidden),
};

