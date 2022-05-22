#pragma once
#include "CoreMinimal.h"
#include "EScriptedActionRule.generated.h"

UENUM(BlueprintType)
enum class EScriptedActionRule : uint8 {
    Any,
    All,
};

