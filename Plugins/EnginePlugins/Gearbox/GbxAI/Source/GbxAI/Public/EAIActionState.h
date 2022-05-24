#pragma once
#include "CoreMinimal.h"
#include "EAIActionState.generated.h"

UENUM(BlueprintType)
enum class EAIActionState : uint8 {
    Idle,
    Starting,
    Running,
    Stopped,
};

