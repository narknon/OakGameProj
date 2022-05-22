#pragma once
#include "CoreMinimal.h"
#include "EScriptedLadderType.generated.h"

UENUM(BlueprintType)
enum class EScriptedLadderType : uint8 {
    None,
    GettingOnAtBottom,
    GettingOffAtBottom,
    GettingOnAtTop,
    GettingOffAtTop,
};

