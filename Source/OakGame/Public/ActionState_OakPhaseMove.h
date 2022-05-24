#pragma once
#include "CoreMinimal.h"
#include "ActionState_Loop.h"
#include "ActionState_OakPhaseMove.generated.h"

USTRUCT()
struct OAKGAME_API FActionState_OakPhaseMove : public FActionState_Loop {
    GENERATED_BODY()
public:
    FActionState_OakPhaseMove();
};

