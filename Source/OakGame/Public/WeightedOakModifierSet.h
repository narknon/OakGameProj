#pragma once
#include "CoreMinimal.h"
#include "OakModifierSet.h"
#include "WeightedOakModifierSet.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FWeightedOakModifierSet {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Weight;
    
    UPROPERTY()
    FOakModifierSet ModifierSet;
    
    UPROPERTY()
    TArray<FName> MutualExclusionTags;
    
    FWeightedOakModifierSet();
};

