#pragma once
#include "CoreMinimal.h"
#include "CoverTransitionStanceFilter.h"
#include "CoverTransitionFilters.generated.h"

USTRUCT(BlueprintType)
struct GBXAI_API FCoverTransitionFilters {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FString> Use;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> Corner;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> High;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> Away;
    
    UPROPERTY(EditAnywhere)
    TArray<FCoverTransitionStanceFilter> Stances;
    
    FCoverTransitionFilters();
};

