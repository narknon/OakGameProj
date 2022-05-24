#pragma once
#include "CoreMinimal.h"
#include "GuardianRankEnabledIndexTracker.h"
#include "Components/ActorComponent.h"
#include "GuardianTokensAddedEventDelegate.h"
#include "GuardianRankRewardEntry.h"
#include "GuardianRankPerkEntry.h"
#include "GuardianRankRewardCategoryEntry.h"
#include "GuardianRankChangedEventDelegate.h"
#include "GuardianExperienceAddedDelegate.h"
#include "GuardianRewardEnableChangeDelegate.h"
#include "GuardianPerkEnableChangeDelegate.h"
#include "EPlayerExperienceSource.h"
#include "EPlayerExperienceType.h"
#include "PlayerGuardianRankComponent.generated.h"

class UGbxAbility;
class UGuardianRankRewardData;
class UPlayerBalanceStateComponent;
class AOakCharacter;
class UGuardianRankPerkData;
class AGbxCharacter;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlayerGuardianRankComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_GuardianRank)
    int32 GuardianRank;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_AvailableTokens)
    int32 AvailableTokens;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_GuardianExperience)
    int64 GuardianExperience;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RankRewards)
    TArray<FGuardianRankRewardEntry> RankRewards;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RankRewardsEnabledBits)
    FGuardianRankEnabledIndexTracker RankRewardsEnabledBits;
    
    UPROPERTY(Transient)
    TArray<FGuardianRankPerkEntry> RankPerks;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RankPerksEnabledBits)
    FGuardianRankEnabledIndexTracker RankPerksEnabledBits;
    
    UPROPERTY(Replicated, Transient)
    int32 RankRewardRandomSeed;
    
    UPROPERTY(Transient)
    TArray<FGuardianRankRewardCategoryEntry> RankRewardCategories;
    
    UPROPERTY(Transient)
    TArray<UGuardianRankRewardData*> CurrentTokenRedemptionOptions;
    
    UPROPERTY(BlueprintAssignable)
    FGuardianRankChangedEvent OnRankChanged;
    
    UPROPERTY(BlueprintAssignable)
    FGuardianTokensAddedEvent OnTokensAdded;
    
    UPROPERTY(BlueprintAssignable)
    FGuardianExperienceAdded OnGuardianExperienceAdded;
    
    UPROPERTY(Replicated, Transient)
    bool bGuardianRankSystemEnabled;
    
    UPROPERTY(Replicated, Transient)
    bool bDisabledForGameMode;
    
    UPROPERTY(BlueprintAssignable)
    FGuardianRewardEnableChange OnRankRewardEnableChanged;
    
    UPROPERTY(BlueprintAssignable)
    FGuardianPerkEnableChange OnRankPerkEnableChanged;
    
private:
    UPROPERTY(Export, Transient)
    UPlayerBalanceStateComponent* OwnerBalanceState;
    
    UPROPERTY(Transient)
    UGbxAbility* AbilityInstance;
    
    UPROPERTY(Transient)
    AOakCharacter* OakCharacterOwner;
    
public:
    UPlayerGuardianRankComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetGuardianRank(int32 NewGuardianRank);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartGuardianRankTracking();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetAvailableTokens(int32 InAvailableTokens);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPurchaseReward(UGuardianRankRewardData* RewardToPurchase);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerEnableReward(UGuardianRankRewardData* RewardToChange, bool bEnable);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerEnablePerkAbility(UGuardianRankPerkData* PerkToChange, bool bEnable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEnableGuardianRankSystem(bool bEnabled);
    
private:
    UFUNCTION()
    void OnRep_RankRewardsEnabledBits(FGuardianRankEnabledIndexTracker& OldEnabledIndexTracker);
    
    UFUNCTION()
    void OnRep_RankRewards();
    
    UFUNCTION()
    void OnRep_RankPerksEnabledBits(FGuardianRankEnabledIndexTracker& OldEnabledIndexTracker);
    
    UFUNCTION()
    void OnRep_GuardianRank(int32 OldGuardianRank);
    
    UFUNCTION()
    void OnRep_GuardianExperience(int64 OldGuardianExperience);
    
    UFUNCTION()
    void OnRep_AvailableTokens(int32 OldAvailableTokens);
    
public:
    UFUNCTION()
    void NotifyUncappedExperienceAdded(const int32 ExperienceAdded, EPlayerExperienceSource Source, EPlayerExperienceType Type);
    
    UFUNCTION()
    void NotifyPrimaryCharacterChanged(AGbxCharacter* NewPrimaryCharacter);
    
    UFUNCTION(BlueprintCallable)
    bool IsGuardianRankSystemEnabled();
    
    UFUNCTION(BlueprintCallable)
    FText GetGuardianRankRewardStatsString();
    
    UFUNCTION(BlueprintCallable)
    int32 GetGuardianRankExperience();
    
    UFUNCTION(BlueprintPure)
    int32 GetGuardianRank() const;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void DebugResetGuardianRank();
    
};

