#pragma once
#include "CoreMinimal.h"
#include "ESkillItemLayoutInfo.generated.h"

UENUM(BlueprintType)
enum class ESkillItemLayoutInfo : uint8 {
    Left,
    Center,
    Right,
    LeftWing,
    RightWing,
};

