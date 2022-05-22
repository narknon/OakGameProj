#pragma once
#include "CoreMinimal.h"
#include "ActionState_PhysicalAnim.h"
#include "ActionState_PhysicalDeath.generated.h"

USTRUCT()
struct GBXGAMESYSTEMCORE_API FActionState_PhysicalDeath : public FActionState_PhysicalAnim {
    GENERATED_BODY()
public:
    FActionState_PhysicalDeath();
};

