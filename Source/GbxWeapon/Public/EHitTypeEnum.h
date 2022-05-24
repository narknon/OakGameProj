#pragma once
#include "CoreMinimal.h"
#include "EHitTypeEnum.generated.h"

UENUM(BlueprintType)
enum class EHitTypeEnum : uint8 {
    Friendly,
    Enemy,
    Neutral,
};

