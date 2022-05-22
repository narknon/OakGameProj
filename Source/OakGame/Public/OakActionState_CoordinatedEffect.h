#pragma once
#include "CoreMinimal.h"
#include "ActionState_CoordinatedEffect.h"
#include "OakActionState_CoordinatedEffect.generated.h"

USTRUCT()
struct FOakActionState_CoordinatedEffect : public FActionState_CoordinatedEffect {
    GENERATED_BODY()
public:
    OAKGAME_API FOakActionState_CoordinatedEffect();
};

