#pragma once
#include "CoreMinimal.h"
#include "ActionState_OakAnim.h"
#include "ActionState_OakPlayerMelee.generated.h"

USTRUCT()
struct FActionState_OakPlayerMelee : public FActionState_OakAnim {
    GENERATED_BODY()
public:
    OAKGAME_API FActionState_OakPlayerMelee();
};

