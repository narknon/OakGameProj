#pragma once
#include "CoreMinimal.h"
#include "EStanceStackLayer.generated.h"

UENUM(BlueprintType)
enum class EStanceStackLayer : uint8 {
    Default,
    AITree,
    Blueprint,
    Scripted,
    Count,
};

