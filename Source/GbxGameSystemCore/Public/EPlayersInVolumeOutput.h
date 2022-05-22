#pragma once
#include "CoreMinimal.h"
#include "EPlayersInVolumeOutput.generated.h"

UENUM(BlueprintType)
enum class EPlayersInVolumeOutput : uint8 {
    InVolume,
    NotInVolume,
};

