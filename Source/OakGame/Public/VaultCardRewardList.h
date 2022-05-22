#pragma once
#include "CoreMinimal.h"
#include "VaultCardRewardInfo.h"
#include "VaultCardGearRewardInfo.h"
#include "VaultCardRewardList.generated.h"

USTRUCT(BlueprintType)
struct FVaultCardRewardList {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FVaultCardRewardInfo> UnlockedVaultCardRewards;
    
    UPROPERTY()
    TArray<FVaultCardRewardInfo> RedeemedVaultCardRewards;
    
    UPROPERTY()
    TArray<FVaultCardGearRewardInfo> RedeemedVaultCardGearRewards;
    
public:
    OAKGAME_API FVaultCardRewardList();
};

