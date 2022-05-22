#pragma once
#include "CoreMinimal.h"
#include "EWwiseAudioComponentType.generated.h"

UENUM(BlueprintType)
enum class EWwiseAudioComponentType : uint8 {
    Standard,
    ActorDefault,
    Temporary,
    Pooled,
};

