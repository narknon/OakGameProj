#pragma once
#include "CoreMinimal.h"
#include "EGbxNavState.generated.h"

UENUM(BlueprintType)
enum class EGbxNavState :  {
    Idle,
    WaitingGoal,
    WaitingPath,
    Moving,
};

