#pragma once
#include "CoreMinimal.h"
#include "EAIActionResultDirective.generated.h"

UENUM(BlueprintType)
enum class EAIActionResultDirective : uint8 {
    Continue,
    Succeed,
    Fail,
};

