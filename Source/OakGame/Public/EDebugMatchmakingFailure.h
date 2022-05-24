#pragma once
#include "CoreMinimal.h"
#include "EDebugMatchmakingFailure.generated.h"

UENUM()
enum class EDebugMatchmakingFailure : int32 {
    None,
    CreateMatchmakingSession,
    JoinMatchmakingSession,
    FindMatchmakingSession,
    FindGameplaySession,
    JoinGameplaySession,
    InitClientMatchmakingBeacon,
    CreateHostMatchmakingBeacon,
};

