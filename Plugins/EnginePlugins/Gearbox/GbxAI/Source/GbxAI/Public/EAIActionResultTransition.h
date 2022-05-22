#pragma once
#include "CoreMinimal.h"
#include "EAIActionResultTransition.generated.h"

UENUM(BlueprintType)
enum class EAIActionResultTransition : uint8 {
    Stop,
    Continue,
    Restart,
};

