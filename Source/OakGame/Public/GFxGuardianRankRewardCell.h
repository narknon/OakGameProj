#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCell.h"
#include "GFxGuardianRankRewardCell.generated.h"

class UGuardianRankRewardData;

UCLASS(NonTransient)
class OAKGAME_API UGFxGuardianRankRewardCell : public UGbxGFxListCell {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGuardianRankRewardData* RewardData;
    
public:
    UGFxGuardianRankRewardCell();
};

