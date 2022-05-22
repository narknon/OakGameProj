#pragma once
#include "CoreMinimal.h"
#include "EEndEventReasons.generated.h"

UENUM(BlueprintType)
enum class EEndEventReasons : int32 {
    Unknown,
    Success,
    NoParticipants,
    Timeout,
    Error,
    Win,
    Draw,
    Lose,
    MapExited,
};

