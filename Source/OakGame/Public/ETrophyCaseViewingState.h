#pragma once
#include "CoreMinimal.h"
#include "ETrophyCaseViewingState.generated.h"

UENUM(BlueprintType)
enum class ETrophyCaseViewingState : uint8 {
    ViewingNone,
    ViewingSet,
    ViewingGroup,
    ViewingTrophy,
};

