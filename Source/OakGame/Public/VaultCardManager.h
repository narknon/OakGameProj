#pragma once
#include "CoreMinimal.h"
#include "VaultCardCurrentChallengeLists.h"
#include "VaultCardRewardList.h"
#include "InventoryReplicationData.h"
#include "VaultCardManager.generated.h"

class AOakPlayerController;
class UVaultCardGeneralData;

USTRUCT(BlueprintType)
struct FVaultCardManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<FVaultCardRewardList> VaultCardRewardEntries;
    
    UPROPERTY(Transient)
    FInventoryReplicationData PendingInventoryReward;
    
    UPROPERTY(Transient)
    uint32 PendingRewardVaultCardID;
    
    UPROPERTY(Transient)
    TArray<FVaultCardCurrentChallengeLists> CurrentVaultCardChallenges;
    
    UPROPERTY(Transient)
    AOakPlayerController* Owner;
    
    UPROPERTY(Transient)
    UVaultCardGeneralData* VaultCardGlobalData;
    
public:
    OAKGAME_API FVaultCardManager();
};

