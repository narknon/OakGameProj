#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ChallengesComponent.h"
#include "DamageChallengeData.h"
#include "OakChallengesComponent.generated.h"

class UOakChallenge;
class UChallenge;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakChallengesComponent : public UChallengesComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<UClass*> RegisteredDamageChallengeClasses;
    
    UPROPERTY(Transient)
    TArray<FDamageChallengeData> QueuedDamageChallengeData;
    
    UPROPERTY(Transient)
    TArray<UClass*> RegisteredKillChallengeClasses;
    
public:
    UOakChallengesComponent();
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequestManualClaimRewards(UOakChallenge* Challenge, int32 RequestedTier);
    
public:
    UFUNCTION()
    void DoAsyncWorkComputingCompletionPercentages(bool bForceToFinishNow);
    
protected:
    UFUNCTION(Client, Reliable)
    void ClientNotifyManualClaimRewardsComplete(UOakChallenge* Challenge, int32 ClaimedTier);
    
public:
    UFUNCTION()
    void BroadcastChallengeUpdateFriendEvent(UChallengesComponent* Component, TSubclassOf<UChallenge> ChallengeClass, int32 NewValue, bool bDisplayNotification, bool bCompleted);
    
    UFUNCTION()
    void BroadcastChallengeCompletedToFriendSystems(UChallengesComponent* Component, TSubclassOf<UChallenge> ChallengeClass);
    
};

