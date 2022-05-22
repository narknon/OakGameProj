#pragma once
#include "CoreMinimal.h"
#include "EGbxGFxDialogBoxStyle.generated.h"

UENUM(BlueprintType)
enum class EGbxGFxDialogBoxStyle : uint8 {
    Default,
    Warning,
    Error,
    Keybinding,
};

