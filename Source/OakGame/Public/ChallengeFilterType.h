#pragma once
#include "CoreMinimal.h"
#include "ChallengeFilterType.generated.h"

class UChallengeCategoryData;

USTRUCT(BlueprintType)
struct OAKGAME_API FChallengeFilterType {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText FilterName;
    
    UPROPERTY(EditAnywhere)
    TArray<UChallengeCategoryData*> IncludedCategories;
    
    FChallengeFilterType();
};

