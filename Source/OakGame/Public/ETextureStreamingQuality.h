#pragma once
#include "CoreMinimal.h"
#include "ETextureStreamingQuality.generated.h"

UENUM(BlueprintType)
enum class ETextureStreamingQuality : uint8 {
    Low,
    Medium,
    High,
    Ultra,
};

