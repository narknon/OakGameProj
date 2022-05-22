#pragma once
#include "CoreMinimal.h"
#include "EPlayThroughType.generated.h"

UENUM(BlueprintType)
enum class EPlayThroughType : uint8 {
    CurrentPlayThrough,
    EffectivePlayThrough,
};

