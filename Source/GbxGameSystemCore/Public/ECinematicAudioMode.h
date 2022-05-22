#pragma once
#include "CoreMinimal.h"
#include "ECinematicAudioMode.generated.h"

UENUM(BlueprintType)
enum class ECinematicAudioMode : uint8 {
    NormalWorldAudio,
    StandardCinematic,
    ExclusiveMode,
};

