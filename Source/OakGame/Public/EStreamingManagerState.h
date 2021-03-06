#pragma once
#include "CoreMinimal.h"
#include "EStreamingManagerState.generated.h"

UENUM(BlueprintType)
enum class EStreamingManagerState : uint8 {
    StreamingManager_Off,
    StreamingManager_Initialized,
    StreamingManager_Active,
    StreamingManager_Paused,
    StreamingManager_MAX UMETA(Hidden),
};

