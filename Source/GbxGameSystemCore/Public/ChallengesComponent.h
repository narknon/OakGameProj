#pragma once
#include "CoreMinimal.h"
#include "ChallengeRegistrationCompleteDelegate.h"
#include "Components/ActorComponent.h"
#include "ChallengeNotificationDelegate.h"
#include "ChallengeInstanceData.h"
#include "ChallengeUpdateNotificationDelegate.h"
#include "ChallengesComponent.generated.h"

class UChallengeCategoryData;
class UGameStatsComponent;
class UGameStatData;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UChallengesComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FChallengeRegistrationComplete OnChallengeRegistrationComplete;
    
    UPROPERTY(BlueprintAssignable)
    FChallengeNotification OnChallengeActivated;
    
    UPROPERTY(BlueprintAssignable)
    FChallengeUpdateNotification OnChallengeUpdated;
    
    UPROPERTY(BlueprintAssignable)
    FChallengeNotification OnChallengeCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FChallengeNotification OnChallengeChildCompleted;
    
protected:
    UPROPERTY(Transient)
    TArray<FChallengeInstanceData> LocalChallengeDataCache;
    
    UPROPERTY(Transient)
    TArray<int32> ChallengeRewardsEarned;
    
    UPROPERTY(Transient)
    TArray<int32> ChallengeRewardsToOfferNext;
    
private:
    UPROPERTY(Export, Transient)
    UGameStatsComponent* GameStatsComponent;
    
public:
    UChallengesComponent();
    UFUNCTION(BlueprintCallable)
    void UnregisterInActivePlayerChallenges();
    
    UFUNCTION(BlueprintCallable)
    void SetChallengeProgress(UClass* ChalClass, int32 NewProgress);
    
    UFUNCTION(BlueprintCallable)
    void SetChallengeActive(UClass* ChalClass, bool bInIsActive);
    
    UFUNCTION(BlueprintCallable)
    bool IsChallengeComplete(UClass* ChalClass);
    
    UFUNCTION(BlueprintCallable)
    bool IsChallengeActive(UClass* ChalClass);
    
    UFUNCTION(BlueprintCallable)
    void IncrementChallengeProgress(UClass* ChalClass);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaxChallengeTiers(UClass* ChalClass);
    
    UFUNCTION(BlueprintCallable)
    TArray<FChallengeInstanceData> GetLocalChallenges();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCompletedChallengeTiers(UClass* ChalClass);
    
    UFUNCTION(BlueprintCallable)
    int32 GetChallengeStatValue(UClass* ChalClass, UGameStatData* StatId);
    
    UFUNCTION(BlueprintCallable)
    int32 GetChallengeStatGoalValue(UClass* ChalClass, UGameStatData* StatId);
    
    UFUNCTION(BlueprintCallable)
    int32 GetChallengeProgressGoalValue(UClass* ChalClass);
    
    UFUNCTION(BlueprintCallable)
    int32 GetChallengeProgress(UClass* ChalClass);
    
    UFUNCTION(BlueprintCallable)
    void GetChallengeCompleteInfoForLevels(TArray<FName> LevelsForChallenges, UChallengeCategoryData* Category, int32& NumCompleted, int32& NumActive, bool bIgnoreHidden);
    
    UFUNCTION(BlueprintCallable)
    void GetChallengeCompleteInfo(UClass* ChalClass, int32& NumCompleted, int32& NumChallenges);
    
    UFUNCTION(BlueprintCallable)
    void CompleteChallengeIfConditionsMet(UClass* ChalClass);
    
    UFUNCTION(BlueprintCallable)
    void CompleteChallenge(UClass* ChalClass, bool bForceActive);
    
    UFUNCTION(Client, Reliable)
    void ClientChallengeUpdateProgress(UClass* ChalClass, int32 NewProgress);
    
    UFUNCTION(Client, Reliable)
    void ClientChallengeCompleted(UClass* ChalClass, int32 NumTiersComplete, bool bForceActive);
    
    UFUNCTION(Client, Reliable)
    void ClientActivateChallenge(UClass* ChalClass);
    
    UFUNCTION(BlueprintCallable)
    bool AreGlobalChallengesRegistered();
    
    UFUNCTION(BlueprintCallable)
    void ActivateChallenge(UClass* ChalClass);
    
};

