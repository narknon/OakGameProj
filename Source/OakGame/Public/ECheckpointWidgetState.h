#pragma once
#include "CoreMinimal.h"
#include "ECheckpointWidgetState.generated.h"

UENUM(BlueprintType)
enum class ECheckpointWidgetState : uint8 {
    None,
    Hidden,
    Intro,
    Idle,
    Exit,
};

