#pragma once
#include "CoreMinimal.h"
#include "PremiumCurrencyData.generated.h"

class UGbxInventoryCategoryData;

USTRUCT(BlueprintType)
struct FPremiumCurrencyData {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UGbxInventoryCategoryData* CategoryData;
    
public:
    OAKGAME_API FPremiumCurrencyData();
};

