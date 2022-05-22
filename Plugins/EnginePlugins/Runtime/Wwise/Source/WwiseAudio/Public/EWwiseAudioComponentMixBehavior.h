#pragma once
#include "CoreMinimal.h"
#include "EWwiseAudioComponentMixBehavior.generated.h"

UENUM(BlueprintType)
enum class EWwiseAudioComponentMixBehavior : uint8 {
    Standard,
    DirectToMasterMix,
    MixGroup,
};

