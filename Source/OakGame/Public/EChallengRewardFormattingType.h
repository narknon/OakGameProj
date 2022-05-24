#pragma once
#include "CoreMinimal.h"
#include "EChallengRewardFormattingType.generated.h"

UENUM(BlueprintType)
enum class EChallengRewardFormattingType : uint8 {
    Cash,
    Eridium,
    Other,
};

