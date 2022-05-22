#pragma once
#include "CoreMinimal.h"
#include "EMatchmakingError.generated.h"

UENUM(BlueprintType)
enum class EMatchmakingError : uint8 {
    None,
    StartHostingFailed,
    StartMatchmakingRoundFailed,
    StartMatchmakingSearchFailed,
    CreateClientMatchmakingBeaconFailed,
    SearchFailed,
    JoinGameFailed,
    RateLimit,
    NetworkFailure,
    ClientCriticalFailure,
    UpdateSessionFailed,
    StartGameplayFailed,
    SplitscreenJoinFailure,
    SplitscreenLeaveFailure,
    NoPlaylistContentAvailable,
};

