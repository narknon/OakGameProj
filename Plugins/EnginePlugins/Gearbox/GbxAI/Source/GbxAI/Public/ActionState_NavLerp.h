#pragma once
#include "CoreMinimal.h"
#include "ActionState_Navigation.h"
#include "ActionState_NavLerp.generated.h"

USTRUCT()
struct GBXAI_API FActionState_NavLerp : public FActionState_Navigation {
    GENERATED_BODY()
public:
    FActionState_NavLerp();
};

