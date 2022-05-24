#pragma once
#include "CoreMinimal.h"
#include "ESkillScreenSlotType.generated.h"

UENUM(BlueprintType)
enum class ESkillScreenSlotType : uint8 {
    None,
    Compatible,
    All,
};

