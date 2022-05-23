#pragma once
#include "CoreMinimal.h"
#include "ECharacterDetail.generated.h"

UENUM(BlueprintType)
enum class ECharacterDetail : uint8 {
    Low,
    Medium,
    High,
    Ultra,
};

