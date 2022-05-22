#pragma once
#include "CoreMinimal.h"
#include "EReviveState.generated.h"

UENUM(BlueprintType)
enum class EReviveState : uint8 {
    ReviveState_None,
    ReviveState_BeingRevived,
    ReviveState_Reviving,
    ReviveState_MAX UMETA(Hidden),
};

