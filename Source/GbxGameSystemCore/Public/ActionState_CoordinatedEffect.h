#pragma once
#include "CoreMinimal.h"
#include "ActionState_Base.h"
#include "ActionState_CoordinatedEffect.generated.h"

USTRUCT()
struct GBXGAMESYSTEMCORE_API FActionState_CoordinatedEffect : public FActionState_Base {
    GENERATED_BODY()
public:
    FActionState_CoordinatedEffect();
};

