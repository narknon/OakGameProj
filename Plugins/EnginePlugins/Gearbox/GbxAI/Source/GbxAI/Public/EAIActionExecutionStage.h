#pragma once
#include "CoreMinimal.h"
#include "EAIActionExecutionStage.generated.h"

UENUM(BlueprintType)
enum class EAIActionExecutionStage :  {
    Starting,
    Running,
    Stopping,
    Stopped,
    CleaningUp,
};

