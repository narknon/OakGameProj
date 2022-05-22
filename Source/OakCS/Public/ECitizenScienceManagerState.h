#pragma once
#include "CoreMinimal.h"
#include "ECitizenScienceManagerState.generated.h"

UENUM(BlueprintType)
enum class ECitizenScienceManagerState :  {
    StreamingManager_Uninitialized,
    StreamingManager_Initialized,
    StreamingManager_MAX UMETA(Hidden),
};

