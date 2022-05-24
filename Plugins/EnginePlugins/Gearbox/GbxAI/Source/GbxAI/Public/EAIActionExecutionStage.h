#pragma once
#include "CoreMinimal.h"
#include "EAIActionExecutionStage.generated.h"

UENUM(BlueprintType)
enum class EAIActionExecutionStage : uint8 {
    Starting,
    Running,
    Stopping,
    Stopped,
    CleaningUp,
};

