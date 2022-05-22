#pragma once
#include "CoreMinimal.h"
#include "OakModifierSet.h"
#include "WeightedOakModifierSet.h"
#include "MayhemModifierDifficultyLevel.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FMayhemModifierDifficultyLevel {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 MayhemLevel;
    
    UPROPERTY()
    FOakModifierSet StaticModifiers;
    
    UPROPERTY()
    int32 RandomModifierCount;
    
    UPROPERTY()
    TArray<FWeightedOakModifierSet> RandomModifierSets;
    
    FMayhemModifierDifficultyLevel();
};

