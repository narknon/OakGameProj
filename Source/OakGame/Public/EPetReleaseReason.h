#pragma once
#include "CoreMinimal.h"
#include "EPetReleaseReason.generated.h"

UENUM(BlueprintType)
enum class EPetReleaseReason : uint8 {
    SpawnCheckFailed,
    PetProfileChanged,
    PetDied,
    PlayerDied,
};

