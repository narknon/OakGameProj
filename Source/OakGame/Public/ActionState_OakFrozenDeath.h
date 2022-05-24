#pragma once
#include "CoreMinimal.h"
#include "ActionState_Base.h"
#include "ActionState_OakFrozenDeath.generated.h"

USTRUCT()
struct FActionState_OakFrozenDeath : public FActionState_Base {
    GENERATED_BODY()
public:
    OAKGAME_API FActionState_OakFrozenDeath();
};

