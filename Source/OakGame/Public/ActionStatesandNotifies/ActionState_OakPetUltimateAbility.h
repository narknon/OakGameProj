#pragma once
#include "CoreMinimal.h"
#include "ActionState_OakRandomAnim.h"
#include "ActionState_OakPetUltimateAbility.generated.h"

USTRUCT()
struct FActionState_OakPetUltimateAbility : public FActionState_OakRandomAnim {
    GENERATED_BODY()
public:
    OAKGAME_API FActionState_OakPetUltimateAbility();
};

