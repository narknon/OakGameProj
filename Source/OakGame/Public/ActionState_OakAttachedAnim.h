#pragma once
#include "CoreMinimal.h"
#include "ActionState_OakAnim.h"
#include "ActionState_OakAttachedAnim.generated.h"

USTRUCT()
struct FActionState_OakAttachedAnim : public FActionState_OakAnim {
    GENERATED_BODY()
public:
    OAKGAME_API FActionState_OakAttachedAnim();
};

