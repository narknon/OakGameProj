#pragma once
#include "CoreMinimal.h"
#include "EWwisePlaybackConfiguration.generated.h"

UENUM(BlueprintType)
enum class EWwisePlaybackConfiguration : int32 {
    Hifi,
    Small,
    Headphones,
    NightTime,
    Mono,
    Spatial,
};

