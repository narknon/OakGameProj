#pragma once
#include "CoreMinimal.h"
#include "OakActionState_CoordinatedEffect.h"
#include "ActionState_OakCloak.generated.h"

USTRUCT()
struct FActionState_OakCloak : public FOakActionState_CoordinatedEffect {
    GENERATED_BODY()
public:
    OAKGAME_API FActionState_OakCloak();
};

