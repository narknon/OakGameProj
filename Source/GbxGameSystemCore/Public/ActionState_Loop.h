#pragma once
#include "CoreMinimal.h"
#include "ActionState_SimpleAnim.h"
#include "ActionState_Loop.generated.h"

USTRUCT()
struct GBXGAMESYSTEMCORE_API FActionState_Loop : public FActionState_SimpleAnim {
    GENERATED_BODY()
public:
    FActionState_Loop();
};

