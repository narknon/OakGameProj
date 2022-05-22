#pragma once
#include "CoreMinimal.h"
#include "TTSDestination.generated.h"

UENUM(BlueprintType)
enum class TTSDestination :  {
    Default,
    RemoteTransmission = 0x0,
    LocalPlayback,
    RemoteTransmissionWithLocalPlayback,
    QueuedRemoteTransmission,
    QueuedLocalPlayback,
    QueuedRemoteTransmissionWithLocalPlayback,
    ScreenReader,
};

