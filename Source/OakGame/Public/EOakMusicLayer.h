#pragma once
#include "CoreMinimal.h"
#include "EOakMusicLayer.generated.h"

UENUM(BlueprintType)
enum class EOakMusicLayer : uint8 {
    Aux,
    Bass,
    Chord,
    Melody,
    Perc_Kick,
    Perc_Large,
    Perc_Small,
    MAX,
};

