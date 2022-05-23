#pragma once
#include "CoreMinimal.h"
#include "EGFxExperienceBarState.generated.h"

UENUM(BlueprintType)
enum class EGFxExperienceBarState : uint8 {
    None,
    ExperienceAddedAnimation,
    LevelUpAnimation,
    FadingOut,
};

