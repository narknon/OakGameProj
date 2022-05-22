#pragma once
#include "CoreMinimal.h"
#include "EEnvironmentDetail.generated.h"

UENUM(BlueprintType)
enum class EEnvironmentDetail : uint8 {
    Low,
    Medium,
    High,
    Ultra,
};

