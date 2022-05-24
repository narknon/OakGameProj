#pragma once
#include "CoreMinimal.h"
#include "EOakOnlineLobbyConnectivityState.generated.h"

UENUM(BlueprintType)
enum class EOakOnlineLobbyConnectivityState : uint8 {
    Unknown,
    Low,
    Medium,
    High,
    None,
};

