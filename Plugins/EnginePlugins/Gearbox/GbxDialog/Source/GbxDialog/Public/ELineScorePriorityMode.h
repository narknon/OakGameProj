#pragma once
#include "CoreMinimal.h"
#include "ELineScorePriorityMode.generated.h"

UENUM(BlueprintType)
enum class ELineScorePriorityMode : uint8 {
    RetainLowerScores,
    DiscardLowerScores,
};

