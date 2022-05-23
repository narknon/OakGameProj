#pragma once
#include "CoreMinimal.h"
#include "EExitDownStateReason.generated.h"

UENUM(BlueprintType)
enum class EExitDownStateReason : uint8 {
    ExitDownStateReason_None,
    ExitDownStateReason_Revived,
    ExitDownStateReason_SecondWind,
    ExitDownStateReason_TimerExpired,
    ExitDownStateReason_Interrupted,
    ExitDownStateReason_Instant,
    ExitDownStateReason_Custom,
    ExitDownStateReason_MAX UMETA(Hidden),
};

