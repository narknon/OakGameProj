#pragma once
#include "CoreMinimal.h"
#include "ESkillScreenReceiveHighlightState.generated.h"

UENUM(BlueprintType)
enum class ESkillScreenReceiveHighlightState : uint8 {
    Off,
    Available,
    Active,
};

