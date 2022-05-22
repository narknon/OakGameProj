#pragma once
#include "CoreMinimal.h"
#include "ActionState_Anim.h"
#include "ActionState_PhysicalAnim.generated.h"

USTRUCT()
struct GBXGAMESYSTEMCORE_API FActionState_PhysicalAnim : public FActionState_Anim {
    GENERATED_BODY()
public:
    FActionState_PhysicalAnim();
};

