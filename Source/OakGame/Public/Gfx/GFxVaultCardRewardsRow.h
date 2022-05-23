#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxVaultCardRewardsRow.generated.h"

class UGFxVaultCardRewardCell;

UCLASS(NonTransient)
class OAKGAME_API UGFxVaultCardRewardsRow : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<UGFxVaultCardRewardCell*> RewardCells;
    
public:
    UGFxVaultCardRewardsRow();
};

