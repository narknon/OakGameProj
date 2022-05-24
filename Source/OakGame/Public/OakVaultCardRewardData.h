#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "UObject/NoExportTypes.h"
#include "VaultCardGearRewardData.h"
#include "VaultCardColumnData.h"
#include "OakVaultCardRewardData.generated.h"

class UItemPoolData;
class UInventoryCategoryData;
class UTexture;
class UChallengeList;
class UDownloadableExpansionData;

UCLASS()
class UOakVaultCardRewardData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FText VaultCardDisplayName;
    
    UPROPERTY(EditDefaultsOnly)
    FString VaultCardNavBarFrameName;
    
    UPROPERTY(EditAnywhere)
    FColor ActiveCardTint;
    
    UPROPERTY(EditAnywhere)
    FColor InactiveCardTint;
    
    UPROPERTY(EditDefaultsOnly)
    UItemPoolData* ChestItemPool;
    
    UPROPERTY(EditDefaultsOnly)
    UInventoryCategoryData* VaultCardKey;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FVaultCardGearRewardData> VaultCardGearRewards;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FVaultCardColumnData> VaultCardRewardColumns;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UChallengeList*> VaultCardChallengeLists;
    
    UPROPERTY(EditAnywhere)
    uint32 VaultCardID;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture> VaultCardIconTexture;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture> VaultCardBannerTexture;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture> VaultCardKeyTexture;
    
    UPROPERTY(Transient)
    uint32 AssociatedVaultCardID;
    
private:
    UPROPERTY(EditAnywhere)
    UDownloadableExpansionData* VaultCardExpansionData;
    
public:
    UOakVaultCardRewardData();
};

