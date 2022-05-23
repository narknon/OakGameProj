#pragma once
#include "CoreMinimal.h"
#include "EPromptLinesLayouts.generated.h"

UENUM(BlueprintType)
enum class EPromptLinesLayouts : uint8 {
    INVALID,
    PrimaryPress,
    PrimaryHold,
    PrimaryPress_PrimaryHold,
    PrimaryPress_SecondaryPress,
    PrimaryPress_SecondaryHold,
    PrimaryHold_SecondaryPress,
    PrimaryHold_SecondaryHold,
};

