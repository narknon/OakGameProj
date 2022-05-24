#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ChallengeGoalValue.h"
#include "UObject/Object.h"
#include "EChallengeType.h"
#include "StatChallengeTest.h"
#include "Challenge.generated.h"

class UChallengeCategoryData;
class UChallengesComponent;
class UChallenge;
class AGbxPlayerController;
class UChallengeLevelActorComponent;
class AGbxCharacter;

UCLASS(Blueprintable, EditInlineNew)
class GBXGAMESYSTEMCORE_API UChallenge : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UChallengesComponent* RegisteredOwner;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<TSubclassOf<UChallenge>> ParentChallenges;
    
    UPROPERTY(EditAnywhere)
    FText ChallengeName;
    
    UPROPERTY(EditAnywhere)
    FText Description;
    
    UPROPERTY(EditAnywhere)
    FText CompletedDescription;
    
    UPROPERTY(EditAnywhere)
    bool bShared;
    
    UPROPERTY(EditAnywhere)
    bool bRepeatable;
    
    UPROPERTY(EditAnywhere)
    bool bHideInUI;
    
    UPROPERTY(EditAnywhere)
    bool bShowActivationUI;
    
    UPROPERTY(EditAnywhere)
    bool bShowProgressUI;
    
    UPROPERTY(EditAnywhere)
    bool bShowCompletionUI;
    
    UPROPERTY(EditAnywhere)
    bool bShowAsUndiscoveredUntilProgressed;
    
    UPROPERTY(VisibleAnywhere)
    FName AssociatedMapName;
    
    UPROPERTY(EditAnywhere)
    EChallengeType ChallengeType;
    
    UPROPERTY(EditAnywhere)
    TArray<FStatChallengeTest> StatChallengeTests;
    
    UPROPERTY(EditAnywhere)
    bool bCompleteIfGoalValueReached;
    
    UPROPERTY(EditAnywhere)
    bool bResetProgressWhenGoalValueReached;
    
    UPROPERTY(EditAnywhere)
    TArray<FChallengeGoalValue> ProgressGoalInfo;
    
    UPROPERTY()
    TArray<int32> ProgressGoalValues;
    
    UPROPERTY(EditAnywhere)
    UChallengeCategoryData* ChallengeCategoryData;
    
    UPROPERTY(EditAnywhere)
    bool bInitiallyActive;
    
    UPROPERTY(EditAnywhere)
    bool bHideFromCounts;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UChallenge> PrerequisiteChallenge;
    
    UPROPERTY(EditAnywhere)
    int32 AssociatedCompletionAchievementId;
    
    UPROPERTY(EditAnywhere)
    int32 AssociatedProgressAchievementId;
    
    UPROPERTY(EditAnywhere)
    bool bProfileChallenge;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<UChallenge>> SubChallenges;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CompletedBySubChallenges;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ActivateIfSubChallengesComplete;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIncrementProgressViaSubChallenges;
    
    UChallenge();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool TestForCompleted(const AGbxPlayerController* PlayerToTest, const UObject* OtherObject, const TArray<FString>& EnumTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetChallengeProgress(int32 NewProgress) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayerExitChallengeArea(UChallengeLevelActorComponent* LevelActorComponent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayerEnterChallengeArea(UChallengeLevelActorComponent* LevelActorComponent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLevelActorRegistered(UChallengeLevelActorComponent* RegisteredLevelActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInitChallengeInstance(UChallengesComponent* OwningChallenges, AGbxCharacter* AssociatedCharacter);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnChallengeActivated();
    
    UFUNCTION(BlueprintPure)
    bool IsChallengeComplete() const;
    
    UFUNCTION(BlueprintPure)
    bool IsChallengeActive() const;
    
    UFUNCTION(BlueprintCallable)
    void IncrementChallengeProgressByValue(int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void IncrementChallengeProgress() const;
    
    UFUNCTION(BlueprintPure)
    void GetLevelActorComponents(TArray<UChallengeLevelActorComponent*>& LevelActorList) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetChallengeProgressGoalValue() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetChallengeProgress() const;
    
    UFUNCTION(BlueprintPure)
    void GetChallengeCompleteInfo(int32& NumCompleted, int32& NumChallenges) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintNativeEvent)
    bool CompletedConditional();
    
    UFUNCTION(BlueprintImplementableEvent)
    void CompletedChallenge(const AGbxPlayerController* CompletedPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CompleteChallenge() const;
    
    UFUNCTION(BlueprintCallable)
    void ActivateChallenge();
    
};

