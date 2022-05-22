#pragma once
#include "CoreMinimal.h"
#include "EAIActionState.generated.h"

UENUM(BlueprintType)
enum class EAIActionState :  {
    Idle,
    Starting,
    Running,
    Stopped,
};

