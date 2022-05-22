#pragma once
#include "CoreMinimal.h"
#include "EChallengeType.generated.h"

UENUM(BlueprintType)
enum class EChallengeType : uint8 {
    ECT_Stat,
    ECT_LevelObject,
    ECT_DesignerTriggered,
    ECT_Blueprint,
    ECT_MAX UMETA(Hidden),
};

