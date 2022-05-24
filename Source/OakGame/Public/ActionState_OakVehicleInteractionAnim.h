#pragma once
#include "CoreMinimal.h"
#include "ActionState_OakAnim.h"
#include "ActionState_OakVehicleInteractionAnim.generated.h"

USTRUCT()
struct OAKGAME_API FActionState_OakVehicleInteractionAnim : public FActionState_OakAnim {
    GENERATED_BODY()
public:
    FActionState_OakVehicleInteractionAnim();
};

