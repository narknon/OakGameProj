#pragma once
#include "CoreMinimal.h"
#include "EPlayerDifficultySetting.generated.h"

UENUM(BlueprintType)
enum class EPlayerDifficultySetting : uint8 {
    Normal,
    StoryMode,
    MAX,
};

