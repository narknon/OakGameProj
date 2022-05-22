#pragma once
#include "CoreMinimal.h"
#include "ActionState_SimpleAnim.h"
#include "ActionState_Launch.generated.h"

USTRUCT()
struct GBXGAMESYSTEMCORE_API FActionState_Launch : public FActionState_SimpleAnim {
    GENERATED_BODY()
public:
    FActionState_Launch();
};

