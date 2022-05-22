#pragma once
#include "CoreMinimal.h"
#include "DonorInfo.generated.h"

USTRUCT(BlueprintType)
struct FDonorInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString DonorName;
    
    UPROPERTY()
    int32 TotalDonation;
    
    OAKGAME_API FDonorInfo();
};

