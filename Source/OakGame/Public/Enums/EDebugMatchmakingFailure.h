#pragma once
#include "CoreMinimal.h"
#include "EDebugMatchmakingFailure.generated.h"

UENUM(BlueprintType)
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

