#pragma once
#include "CoreMinimal.h"
#include "EGFxMapMenuState.generated.h"

UENUM(BlueprintType)
enum class EGFxMapMenuState : uint8 {
    None,
    Tutorial_Stage1,
    Tutorial_Stage2,
    Tutorial_Stage3,
    Tutorial_Stage4,
    Tutorial_Stage5,
    Progress,
    FastTravel,
    Challenges,
    Friends,
};

