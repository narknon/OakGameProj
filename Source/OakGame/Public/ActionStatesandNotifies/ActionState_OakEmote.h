#pragma once
#include "CoreMinimal.h"
#include "ActionState_OakAnim.h"
#include "ActionState_OakEmote.generated.h"

USTRUCT()
struct FActionState_OakEmote : public FActionState_OakAnim {
    GENERATED_BODY()
public:
    OAKGAME_API FActionState_OakEmote();
};

