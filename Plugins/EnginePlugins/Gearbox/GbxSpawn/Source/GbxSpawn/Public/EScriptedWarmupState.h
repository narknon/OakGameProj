#pragma once
#include "CoreMinimal.h"
#include "EScriptedWarmupState.generated.h"

UENUM(BlueprintType)
enum class EScriptedWarmupState : uint8 {
    None,
    Activated,
    Complete,
};

