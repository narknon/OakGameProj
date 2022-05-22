#pragma once
#include "CoreMinimal.h"
#include "ActionState_SimpleAnim.h"
#include "ActionState_StretchBones.generated.h"

USTRUCT()
struct GBXGAMESYSTEMCORE_API FActionState_StretchBones : public FActionState_SimpleAnim {
    GENERATED_BODY()
public:
    FActionState_StretchBones();
};

