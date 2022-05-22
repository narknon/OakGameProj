#pragma once
#include "CoreMinimal.h"
#include "AbilityTreeTier.generated.h"

class UOakPlayerAbilityTreeTierData;
class UOakPlayerAbilityTree;

USTRUCT(BlueprintType)
struct FAbilityTreeTier {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    UOakPlayerAbilityTree* Owner;
    
    UPROPERTY(Transient)
    UOakPlayerAbilityTreeTierData* TierData;
    
    OAKGAME_API FAbilityTreeTier();
};

