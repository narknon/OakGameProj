#pragma once
#include "CoreMinimal.h"
#include "ActionState_SimpleAnim.h"
#include "ActionState_AICharge.generated.h"

USTRUCT()
struct GBXGAMESYSTEMCORE_API FActionState_AICharge : public FActionState_SimpleAnim {
    GENERATED_BODY()
public:
    FActionState_AICharge();
};

