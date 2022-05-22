#pragma once
#include "CoreMinimal.h"
#include "ChallengeTrophy.h"
#include "ChallengeTrophyGroup.generated.h"

class UTrophyCaseBaseComponent;

USTRUCT(BlueprintType)
struct FChallengeTrophyGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText TrophyGroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText TrophyGroupDescription;
    
    UPROPERTY(Export, Transient)
    UTrophyCaseBaseComponent* AssociatedGroupBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FChallengeTrophy> TrophyList;
    
    OAKGAME_API FChallengeTrophyGroup();
};

