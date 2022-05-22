#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "GbxInventoryCategoryData.generated.h"

UCLASS(Abstract)
class GBXGAMESYSTEMCORE_API UGbxInventoryCategoryData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool bIsPremiumCurrencyCategory;
    
    UGbxInventoryCategoryData();
};

