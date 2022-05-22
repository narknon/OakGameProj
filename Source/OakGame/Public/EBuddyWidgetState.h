#pragma once
#include "CoreMinimal.h"
#include "EBuddyWidgetState.generated.h"

UENUM(BlueprintType)
enum class EBuddyWidgetState : uint8 {
    Healthy,
    Healthy_JustRespawned,
    Dying,
    BeingRevived,
    Respawning,
    RespawnTimer,
    Spectating,
};

