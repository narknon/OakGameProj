#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "AttributeInitializationData.h"
#include "ChallengeRewardData.generated.h"

UCLASS()
class GBXGAMESYSTEMCORE_API UChallengeRewardData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText RewardName;
    
    UPROPERTY(EditAnywhere)
    FText Description;
    
    UPROPERTY(EditAnywhere)
    FText RewardString;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData AttrInitDef;
    
    UPROPERTY(Transient)
    int32 CachedRewardIndex;
    
    UChallengeRewardData();
};

