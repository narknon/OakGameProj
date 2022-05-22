#pragma once
#include "CoreMinimal.h"
#include "ECharacterTextureDetail.generated.h"

UENUM(BlueprintType)
enum class ECharacterTextureDetail : uint8 {
    Low,
    Medium,
    High,
    Ultra,
    Deprecated,
};

