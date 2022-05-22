#pragma once
#include "CoreMinimal.h"
#include "Donator.generated.h"

USTRUCT(BlueprintType)
struct FDonator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bIsFirstDonator;
    
    UPROPERTY(EditAnywhere)
    FString DonatorName;
    
    UPROPERTY(EditAnywhere)
    int32 NumberOfDonations;
    
    UPROPERTY(EditAnywhere)
    int32 BitsDonatedTotal;
    
    OAKGAME_API FDonator();
};

