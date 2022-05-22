#pragma once
#include "CoreMinimal.h"
#include "EEnvironmentTextureDetail.generated.h"

UENUM(BlueprintType)
enum class EEnvironmentTextureDetail : uint8 {
    Low,
    Medium,
    High,
    Ultra,
    Deprecated,
};

