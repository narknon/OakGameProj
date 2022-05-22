#pragma once
#include "CoreMinimal.h"
#include "ActionState_Navigation.h"
#include "ActionState_NavAnim.generated.h"

USTRUCT()
struct GBXAI_API FActionState_NavAnim : public FActionState_Navigation {
    GENERATED_BODY()
public:
    FActionState_NavAnim();
};

