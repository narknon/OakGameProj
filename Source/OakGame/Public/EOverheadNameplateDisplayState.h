#pragma once
#include "CoreMinimal.h"
#include "EOverheadNameplateDisplayState.generated.h"

UENUM(BlueprintType)
enum class EOverheadNameplateDisplayState : uint8 {
    None,
    CenteredName_Name,
    CenteredName_Arrow,
    State_Name,
    State_Arrow,
};

