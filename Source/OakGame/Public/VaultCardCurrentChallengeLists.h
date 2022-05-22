#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VaultCardPreviousChallenge.h"
#include "VaultCardCurrentChallengeLists.generated.h"

class UChallenge;

USTRUCT(BlueprintType)
struct FVaultCardCurrentChallengeLists {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<TSubclassOf<UChallenge>> Challenges;
    
    UPROPERTY()
    TArray<TSubclassOf<UChallenge>> CompletedChallenges;
    
    UPROPERTY()
    TArray<FVaultCardPreviousChallenge> PreviouslyActiveDailyChallenges;
    
    UPROPERTY()
    TArray<FVaultCardPreviousChallenge> PreviouslyActiveWeeklyChallenges;
    
    OAKGAME_API FVaultCardCurrentChallengeLists();
};

