#pragma once
#include "CoreMinimal.h"
#include "EInteractionPromptGlyphMode.generated.h"

UENUM(BlueprintType)
enum class EInteractionPromptGlyphMode : uint8 {
    InvalidForUseDef,
    Normal,
    CantUse,
    Locked,
};

