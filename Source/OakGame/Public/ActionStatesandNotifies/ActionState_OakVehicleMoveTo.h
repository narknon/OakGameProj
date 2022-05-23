#pragma once
#include "CoreMinimal.h"
#include "ActionState_Base.h"
#include "ActionState_OakVehicleMoveTo.generated.h"

USTRUCT()
struct FActionState_OakVehicleMoveTo : public FActionState_Base {
    GENERATED_BODY()
public:
    OAKGAME_API FActionState_OakVehicleMoveTo();
};

