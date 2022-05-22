#pragma once
#include "CoreMinimal.h"
#include "MayhemModifier.h"
#include "MayhemModifierSet.generated.h"

class UUIStatData;

USTRUCT(BlueprintType)
struct OAKGAME_API FMayhemModifierSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FMayhemModifier> Modifiers;
    
    UPROPERTY(EditAnywhere)
    float Weight;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> MutualExclusionTags;
    
    UPROPERTY(EditAnywhere)
    TArray<UUIStatData*> UIStats;
    
    FMayhemModifierSet();
};

