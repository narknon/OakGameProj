#pragma once
#include "CoreMinimal.h"
#include "ActionState_SimpleAnim.h"
#include "ActionState_OakHostileAttach.generated.h"

USTRUCT()
struct FActionState_OakHostileAttach : public FActionState_SimpleAnim {
    GENERATED_BODY()
public:
    OAKGAME_API FActionState_OakHostileAttach();
};

