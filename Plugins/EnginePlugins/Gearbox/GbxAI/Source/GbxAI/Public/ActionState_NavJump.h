#pragma once
#include "CoreMinimal.h"
#include "ActionState_Navigation.h"
#include "ActionState_NavJump.generated.h"

USTRUCT()
struct GBXAI_API FActionState_NavJump : public FActionState_Navigation {
    GENERATED_BODY()
public:
    FActionState_NavJump();
};

