#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "AttributeEffectData.h"
#include "GuardianRankRewardData.generated.h"

class UGuardianRankRewardCategoryData;
class UUIStatData_Attribute;

UCLASS()
class OAKGAME_API UGuardianRankRewardData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UGuardianRankRewardCategoryData* RankCategory;
    
    UPROPERTY(EditAnywhere)
    TArray<FAttributeEffectData> RewardAttributeEffects;
    
    UPROPERTY(EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(EditAnywhere)
    FText Description;
    
    UPROPERTY(EditAnywhere)
    UUIStatData_Attribute* RewardUIStat;
    
    UPROPERTY(Transient)
    int32 CachedRewardIndex;
    
    UGuardianRankRewardData();
};

