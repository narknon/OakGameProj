#pragma once
#include "CoreMinimal.h"
#include "EPotentialDuelState.generated.h"

UENUM(BlueprintType)
enum class EPotentialDuelState : uint8 {
    None,
    WaitingToBeAccepted,
    WaitingToStart,
    Started,
};

