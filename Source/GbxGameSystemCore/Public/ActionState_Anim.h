#pragma once
#include "CoreMinimal.h"
#include "ActionState_SimpleAnim.h"
#include "ActionState_Anim.generated.h"

USTRUCT()
struct GBXGAMESYSTEMCORE_API FActionState_Anim : public FActionState_SimpleAnim {
    GENERATED_BODY()
public:
    FActionState_Anim();
};

