#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ZoneMapChallengeGroupEntry.generated.h"

class UChallengeCategoryData;
class UChallenge;

USTRUCT(BlueprintType)
struct FZoneMapChallengeGroupEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UChallengeCategoryData* ChallengeGroup;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<TSubclassOf<UChallenge>> ChallengesInGroup;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 NumChallengesInCategory;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 NumChallengesVisibleInUI;
    
    OAKGAME_API FZoneMapChallengeGroupEntry();
};

