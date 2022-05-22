#pragma once
#include "CoreMinimal.h"
#include "ETargetedNameplateState.generated.h"

UENUM(BlueprintType)
enum class ETargetedNameplateState : uint8 {
    NotShowingTarget_Linger,
    NotShowingTarget,
    ShowingValidTarget,
    ShowingDyingTarget,
};

