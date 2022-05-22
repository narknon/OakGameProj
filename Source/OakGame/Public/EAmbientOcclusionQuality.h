#pragma once
#include "CoreMinimal.h"
#include "EAmbientOcclusionQuality.generated.h"

UENUM(BlueprintType)
enum class EAmbientOcclusionQuality : uint8 {
    Off,
    Low,
    Medium,
    High,
    Ultra,
};

