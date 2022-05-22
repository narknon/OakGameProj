#pragma once
#include "CoreMinimal.h"
#include "EInteractionPromptGlyphMode.generated.h"

UENUM(BlueprintType)
enum class EInteractionPromptGlyphMode :  {
    InvalidForUseDef,
    Normal,
    CantUse,
    Locked,
};

