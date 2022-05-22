#pragma once
#include "CoreMinimal.h"
#include "EWwisePostEventFlags.generated.h"

UENUM(BlueprintType)
enum class EWwisePostEventFlags :  {
    MarkerCallbacks,
    SupportDuration,
    SupportPlaybackPosition,
    MusicSyncCallbacks,
};

