#pragma once
#include "CoreMinimal.h"
#include "ESpeakerSetup.generated.h"

UENUM(BlueprintType)
enum class ESpeakerSetup : uint8 {
    SmallSpeaker,
    Hifi,
    NightTime,
    Mono,
    Headphones,
    Logitech,
};

