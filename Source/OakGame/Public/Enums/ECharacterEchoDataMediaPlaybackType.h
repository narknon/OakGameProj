#pragma once
#include "CoreMinimal.h"
#include "ECharacterEchoDataMediaPlaybackType.generated.h"

UENUM(BlueprintType)
enum class ECharacterEchoDataMediaPlaybackType : int32 {
    PlayAndClose,
    LoopUntilAudioEnds,
};

