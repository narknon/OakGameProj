#pragma once
#include "CoreMinimal.h"
#include "EEffectStateType.generated.h"

UENUM(BlueprintType)
enum class EEffectStateType : uint8 {
    Play,
    Stop,
    Count,
};

