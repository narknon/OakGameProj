#pragma once
#include "CoreMinimal.h"
#include "EOakOnlineLobbyTalkingState.generated.h"

UENUM(BlueprintType)
enum class EOakOnlineLobbyTalkingState : uint8 {
    NotTalking,
    Talking,
    Muted,
};

