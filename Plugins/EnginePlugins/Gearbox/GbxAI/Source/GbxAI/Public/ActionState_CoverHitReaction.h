#pragma once
#include "CoreMinimal.h"
#include "ActionState_SimpleAnim.h"
#include "ActionState_CoverHitReaction.generated.h"

USTRUCT()
struct FActionState_CoverHitReaction : public FActionState_SimpleAnim {
    GENERATED_BODY()
public:
    GBXAI_API FActionState_CoverHitReaction();
};

