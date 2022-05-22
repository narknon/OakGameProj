#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "WeightedLoadingTooltip.h"
#include "OakLoadingScreenExpansionData.generated.h"

class UMaterialInterface;

UCLASS()
class OAKGAME_API UOakLoadingScreenExpansionData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TMap<FName, TSoftObjectPtr<UMaterialInterface>> PerMapBackgrounds;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FName, TSoftObjectPtr<UMaterialInterface>> PerMapBackgrounds_4K;
    
    UPROPERTY(EditAnywhere)
    TArray<FWeightedLoadingTooltip> LoadingTooltips;
    
    UOakLoadingScreenExpansionData();
};

