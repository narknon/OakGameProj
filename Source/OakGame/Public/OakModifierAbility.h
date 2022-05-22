#pragma once
#include "CoreMinimal.h"
#include "OakAbility.h"
#include "OakModifierAbility.generated.h"

UCLASS(Abstract)
class OAKGAME_API UOakModifierAbility : public UOakAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    bool bPauseModifiers;
    
public:
    UOakModifierAbility();
};

