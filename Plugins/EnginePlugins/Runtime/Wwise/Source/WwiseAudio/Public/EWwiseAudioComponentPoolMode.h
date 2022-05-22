#pragma once
#include "CoreMinimal.h"
#include "EWwiseAudioComponentPoolMode.generated.h"

UENUM(BlueprintType)
enum class EWwiseAudioComponentPoolMode : uint8 {
    Fixed,
    Steal,
};

