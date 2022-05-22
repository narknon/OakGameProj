#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "GuardianRankRewardCategoryData.generated.h"

UCLASS()
class OAKGAME_API UGuardianRankRewardCategoryData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(EditAnywhere)
    FText Description;
    
    UPROPERTY(EditAnywhere)
    FString IconFrameName;
    
    UPROPERTY(EditAnywhere)
    int32 SortPriority;
    
    UGuardianRankRewardCategoryData();
};

