#pragma once
#include "CoreMinimal.h"
#include "CoverTransitionStanceFilter.generated.h"

class UStanceDataProvider;

USTRUCT(BlueprintType)
struct FCoverTransitionStanceFilter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Filter;
    
    UPROPERTY(EditAnywhere)
    UStanceDataProvider* Stance;
    
    GBXAI_API FCoverTransitionStanceFilter();
};

