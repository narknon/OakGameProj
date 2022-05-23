#pragma once
#include "CoreMinimal.h"
#include "EPlayerExperienceType.generated.h"

UENUM(BlueprintType)
enum class EPlayerExperienceType : uint8 {
    Generic,
    Combat,
    Mission,
};

