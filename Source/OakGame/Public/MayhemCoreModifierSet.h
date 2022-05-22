#pragma once
#include "CoreMinimal.h"
#include "MayhemModifier.h"
#include "MayhemCoreSetUIStats.h"
#include "MayhemCoreModifierSet.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FMayhemCoreModifierSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FMayhemModifier> Modifiers;
    
    UPROPERTY(EditAnywhere)
    FMayhemCoreSetUIStats UIStats;
    
    FMayhemCoreModifierSet();
};

