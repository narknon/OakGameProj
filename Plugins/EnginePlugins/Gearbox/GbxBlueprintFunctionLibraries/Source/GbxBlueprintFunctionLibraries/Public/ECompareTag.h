#pragma once
#include "CoreMinimal.h"
#include "ECompareTag.generated.h"

UENUM(BlueprintType)
enum class ECompareTag : uint8 {
    ContainsSameTags,
    UniqueTags,
};

