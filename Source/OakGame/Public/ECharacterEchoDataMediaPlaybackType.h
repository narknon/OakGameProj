#pragma once
#include "CoreMinimal.h"
#include "ECharacterEchoDataMediaPlaybackType.generated.h"

UENUM()
enum class ECharacterEchoDataMediaPlaybackType : int32 {
    PlayAndClose,
    LoopUntilAudioEnds,
};

