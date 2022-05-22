#pragma once
#include "CoreMinimal.h"
#include "MayhemModifierSet.h"
#include "PendingMayhemState.generated.h"

USTRUCT()
struct FPendingMayhemState {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FMayhemModifierSet> ModifierSets;
    
    OAKGAME_API FPendingMayhemState();
};

