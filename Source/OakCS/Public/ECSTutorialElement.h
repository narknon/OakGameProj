#pragma once
#include "CoreMinimal.h"
#include "ECSTutorialElement.generated.h"

UENUM(BlueprintType)
enum class ECSTutorialElement : uint8 {
    Guideline,
    SubmitButton,
    ScoreBar,
    TokenPool,
    ScoreDisplay,
};

