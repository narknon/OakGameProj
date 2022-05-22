#pragma once
#include "CoreMinimal.h"
#include "ECSScoreCondition.generated.h"

UENUM(BlueprintType)
enum class ECSScoreCondition : uint8 {
    ParScore,
    HighestScore,
    UnderParScore,
};

