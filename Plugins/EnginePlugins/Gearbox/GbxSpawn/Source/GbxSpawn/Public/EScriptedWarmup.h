#pragma once
#include "CoreMinimal.h"
#include "EScriptedWarmup.generated.h"

UENUM(BlueprintType)
enum class EScriptedWarmup : uint8 {
    None,
    FirstWave,
    AllWaves,
};

