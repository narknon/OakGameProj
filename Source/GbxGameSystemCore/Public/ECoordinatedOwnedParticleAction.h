#pragma once
#include "CoreMinimal.h"
#include "ECoordinatedOwnedParticleAction.generated.h"

UENUM(BlueprintType)
enum class ECoordinatedOwnedParticleAction : uint8 {
    None,
    Hide,
    Suppress,
};

