#pragma once
#include "CoreMinimal.h"
#include "MatchmakingModifierData.h"
#include "MatchmakingModifierSetData.generated.h"

USTRUCT(BlueprintType)
struct FMatchmakingModifierSetData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    FText DisplayName;
    
    UPROPERTY()
    FText DisplayDesc;
    
    UPROPERTY()
    TArray<FMatchmakingModifierData> Modifiers;
    
    OAKGAME_API FMatchmakingModifierSetData();
};

