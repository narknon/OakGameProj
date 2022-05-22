#pragma once
#include "CoreMinimal.h"
#include "DonationTier.generated.h"

USTRUCT(BlueprintType)
struct FDonationTier {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float PercentOfMinProductCost;
    
    UPROPERTY(EditAnywhere)
    FText TierTitle;
    
    UPROPERTY(EditAnywhere)
    FText TierDescription;
    
    UPROPERTY(EditAnywhere)
    float TierDuration;
    
    OAKGAME_API FDonationTier();
};

