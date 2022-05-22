#pragma once
#include "CoreMinimal.h"
#include "ENativeEnemyExperienceType.generated.h"

UENUM(BlueprintType)
enum class ENativeEnemyExperienceType : uint8 {
    Chump,
    Normal,
    NormalHigh,
    Tough,
    ToughHigh,
    Badass,
    SuperBadass,
    UltimateBadass,
    Boss,
};

