#pragma once
#include "CoreMinimal.h"
#include "ActionState_PhysicalDeath.h"
#include "ActionState_OakPhysicalDeath.generated.h"

USTRUCT()
struct OAKGAME_API FActionState_OakPhysicalDeath : public FActionState_PhysicalDeath {
    GENERATED_BODY()
public:
    FActionState_OakPhysicalDeath();
};

