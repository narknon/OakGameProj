#pragma once
#include "CoreMinimal.h"
#include "ActionState_OakAnim.h"
#include "ActionState_OakRandomAnim.generated.h"

USTRUCT()
struct OAKGAME_API FActionState_OakRandomAnim : public FActionState_OakAnim {
    GENERATED_BODY()
public:
    FActionState_OakRandomAnim();
};

