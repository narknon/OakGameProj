#pragma once
#include "CoreMinimal.h"
#include "EAIActionLayer.generated.h"

UENUM(BlueprintType)
enum class EAIActionLayer : uint8 {
    Default,
    Script,
    Count,
};

