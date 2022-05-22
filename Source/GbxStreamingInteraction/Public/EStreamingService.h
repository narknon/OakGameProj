#pragma once
#include "CoreMinimal.h"
#include "EStreamingService.generated.h"

UENUM(BlueprintType)
enum class EStreamingService : uint8 {
    None,
    Twitch,
    Mixer,
};

