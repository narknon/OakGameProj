#pragma once
#include "CoreMinimal.h"
#include "EEffectivePlayerCountSetting.generated.h"

UENUM(BlueprintType)
enum class EEffectivePlayerCountSetting : int32 {
    GameForced,
    UserRequested,
    Actual,
};

