#pragma once
#include "CoreMinimal.h"
#include "EEndEventReasons.generated.h"

UENUM()
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

