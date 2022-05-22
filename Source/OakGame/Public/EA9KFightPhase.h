#pragma once
#include "CoreMinimal.h"
#include "EA9KFightPhase.generated.h"

UENUM(BlueprintType)
enum class EA9KFightPhase : uint8 {
    NotStarted,
    Phase1,
    Phase2,
    Phase3,
    Phase4,
    Dead,
};

