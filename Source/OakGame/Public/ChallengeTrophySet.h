#pragma once
#include "CoreMinimal.h"
#include "ChallengeTrophyGroup.h"
#include "ChallengeTrophySet.generated.h"

USTRUCT(BlueprintType)
struct FChallengeTrophySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText TrophySetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText TrophySetDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FChallengeTrophyGroup> TrophyGroupList;
    
    OAKGAME_API FChallengeTrophySet();
};

