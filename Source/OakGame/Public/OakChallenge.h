#pragma once
#include "CoreMinimal.h"
#include "Challenge.h"
#include "OakChallengeTierRewards.h"
#include "AttributeInitializationData.h"
#include "OakChallengeTierRewardsPerInstance.h"
#include "OakChallenge.generated.h"

class URegionData;
class UItemPoolData;
class UOakCustomizationData;
class UWeaponSkinPartData;
class UWeaponTrinketPartData;
class UActivityFeedReward;
class UPlayerClassIdentifier;

UCLASS(EditInlineNew)
class OAKGAME_API UOakChallenge : public UChallenge {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<URegionData> REGION;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData ExperienceReward;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData CashReward;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData EridiumReward;
    
    UPROPERTY(EditDefaultsOnly)
    UItemPoolData* RewardItemPool;
    
    UPROPERTY(EditAnywhere)
    TArray<UOakCustomizationData*> RewardCustomizations;
    
    UPROPERTY(EditAnywhere)
    TArray<UWeaponSkinPartData*> RewardWeaponSkins;
    
    UPROPERTY(EditAnywhere)
    TArray<UWeaponTrinketPartData*> RewardWeaponTrinkets;
    
    UPROPERTY()
    TArray<FOakChallengeTierRewards> TierRewards;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FOakChallengeTierRewardsPerInstance> TierRewardsPerInstance;
    
    UPROPERTY(EditDefaultsOnly)
    UActivityFeedReward* ActivityFeedReward;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsCrewChallenge;
    
    UPROPERTY(EditDefaultsOnly)
    bool bManuallyGiveTierRewards;
    
    UPROPERTY(EditAnywhere)
    UPlayerClassIdentifier* AssociatedCharacterClass;
    
    UPROPERTY(Transient, VisibleAnywhere)
    uint32 VaultCardID;
    
    UPROPERTY(EditDefaultsOnly)
    bool bWeeklyVaultCard;
    
public:
    UOakChallenge();
    UFUNCTION(BlueprintPure)
    int32 GetChallengeLevel() const;
    
};

