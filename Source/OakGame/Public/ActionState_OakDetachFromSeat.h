#pragma once
#include "CoreMinimal.h"
#include "ActionState_Base.h"
#include "ActionState_OakDetachFromSeat.generated.h"

USTRUCT()
struct FActionState_OakDetachFromSeat : public FActionState_Base {
    GENERATED_BODY()
public:
    OAKGAME_API FActionState_OakDetachFromSeat();
};

