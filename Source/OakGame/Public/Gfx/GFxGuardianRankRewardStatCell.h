#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCell.h"
#include "GFxGuardianRankRewardStatCell.generated.h"

class UGuardianRankRewardData;

UCLASS(NonTransient)
class OAKGAME_API UGFxGuardianRankRewardStatCell : public UGbxGFxListCell {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGuardianRankRewardData* RewardData;
    
public:
    UGFxGuardianRankRewardStatCell();
};

