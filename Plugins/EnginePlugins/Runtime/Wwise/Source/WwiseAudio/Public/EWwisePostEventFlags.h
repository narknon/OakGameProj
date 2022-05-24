#pragma once
#include "CoreMinimal.h"
#include "EWwisePostEventFlags.generated.h"

UENUM(BlueprintType)
enum class EWwisePostEventFlags : uint8 {
    MarkerCallbacks,
    SupportDuration,
    SupportPlaybackPosition,
    MusicSyncCallbacks,
};

