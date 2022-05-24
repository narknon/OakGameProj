#pragma once
#include "CoreMinimal.h"
#include "EDamageInstigatorClassification.generated.h"

UENUM(BlueprintType)
enum class EDamageInstigatorClassification : uint8 {
    Other,
    PlayerVersusPlayer,
    PlayerVersusAI,
    AIVersusPlayer,
};

