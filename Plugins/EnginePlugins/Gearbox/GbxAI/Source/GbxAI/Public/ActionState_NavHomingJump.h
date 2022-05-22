#pragma once
#include "CoreMinimal.h"
#include "ActionState_NavJump.h"
#include "ActionState_NavHomingJump.generated.h"

USTRUCT()
struct GBXAI_API FActionState_NavHomingJump : public FActionState_NavJump {
    GENERATED_BODY()
public:
    FActionState_NavHomingJump();
};

