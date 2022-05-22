#pragma once
#include "CoreMinimal.h"
#include "DamageOverTimeManager.h"
#include "OakDamageOverTimeManager.generated.h"

UCLASS(NonTransient)
class UOakDamageOverTimeManager : public UDamageOverTimeManager {
    GENERATED_BODY()
public:
    UOakDamageOverTimeManager();
};

