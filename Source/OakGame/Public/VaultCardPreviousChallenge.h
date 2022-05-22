#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VaultCardPreviousChallenge.generated.h"

class UChallenge;

USTRUCT(BlueprintType)
struct FVaultCardPreviousChallenge {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 PreviousChallengeSeed;
    
    UPROPERTY()
    TSubclassOf<UChallenge> PreviousChallenge;
    
    OAKGAME_API FVaultCardPreviousChallenge();
};

