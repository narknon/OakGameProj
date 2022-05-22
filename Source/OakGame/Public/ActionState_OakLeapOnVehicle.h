#pragma once
#include "CoreMinimal.h"
#include "ActionState_NavHomingJump.h"
#include "ActionState_OakLeapOnVehicle.generated.h"

USTRUCT()
struct FActionState_OakLeapOnVehicle : public FActionState_NavHomingJump {
    GENERATED_BODY()
public:
    OAKGAME_API FActionState_OakLeapOnVehicle();
};

