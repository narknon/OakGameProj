#pragma once
#include "CoreMinimal.h"
#include "ActionState_Base.h"
#include "ActionState_BlueprintBase.generated.h"

USTRUCT()
struct FActionState_BlueprintBase : public FActionState_Base {
    GENERATED_BODY()
public:
    GBXGAMESYSTEMCORE_API FActionState_BlueprintBase();
};

