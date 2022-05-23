#pragma once
#include "CoreMinimal.h"
#include "ActionState_Gib.h"
#include "ActionState_OakGib.generated.h"

USTRUCT()
struct OAKGAME_API FActionState_OakGib : public FActionState_Gib {
    GENERATED_BODY()
public:
    FActionState_OakGib();
};

