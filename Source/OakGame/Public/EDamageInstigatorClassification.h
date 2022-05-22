#pragma once
#include "CoreMinimal.h"
#include "EDamageInstigatorClassification.generated.h"

UENUM(BlueprintType)
enum class EDamageInstigatorClassification :  {
    Other,
    PlayerVersusPlayer,
    PlayerVersusAI,
    AIVersusPlayer,
};

