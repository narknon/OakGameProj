#pragma once
#include "CoreMinimal.h"
#include "ENavJumpStage.generated.h"

UENUM(BlueprintType)
enum class ENavJumpStage : uint8 {
    None,
    Enter,
    Idle,
    Exit,
    End,
};

