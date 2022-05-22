#pragma once
#include "CoreMinimal.h"
#include "VaultCardRewardDataBase.h"
#include "VaultCardGearRewardData.generated.h"

class UInventoryBalanceData;
class UItemPoolData;

USTRUCT(BlueprintType)
struct FVaultCardGearRewardData : public FVaultCardRewardDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UInventoryBalanceData* GearReward;
    
    UPROPERTY(EditAnywhere)
    UItemPoolData* GearRewardItemPool;
    
    OAKGAME_API FVaultCardGearRewardData();
};

