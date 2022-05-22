#pragma once
#include "CoreMinimal.h"
#include "EDialogEventEnum.generated.h"

UENUM(BlueprintType)
enum class EDialogEventEnum :  {
    DE_Introduction,
    DE_SubmittedPuzzle,
    DE_IdleLine,
    DE_PuzzleComplete,
    DE_MAX UMETA(Hidden),
};

