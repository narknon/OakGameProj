#pragma once
#include "CoreMinimal.h"
#include "ActionState_OakAnim.h"
#include "ActionState_OakAnimActionAbility.generated.h"

USTRUCT()
struct FActionState_OakAnimActionAbility : public FActionState_OakAnim {
    GENERATED_BODY()
public:
    OAKGAME_API FActionState_OakAnimActionAbility();
};

