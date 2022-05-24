#pragma once
#include "CoreMinimal.h"
#include "ECitizenScienceManagerState.generated.h"

UENUM(BlueprintType)
enum class ECitizenScienceManagerState : uint8 {
    StreamingManager_Uninitialized,
    StreamingManager_Initialized,
    StreamingManager_MAX UMETA(Hidden),
};

