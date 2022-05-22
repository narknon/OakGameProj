#pragma once
#include "CoreMinimal.h"
#include "EScriptedWarmupState.generated.h"

UENUM(BlueprintType)
enum class EScriptedWarmupState :  {
    None,
    Activated,
    Complete,
};

