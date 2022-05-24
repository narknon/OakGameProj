#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "GbxUIFormattedText.h"
#include "MissionObjectiveChain.h"
#include "MissionObjectiveDependency.h"
#include "DialogConversation.h"
#include "DialogTimeSlotReference.h"
#include "Mission.generated.h"

class UMissionGraph;
class AMissionTrackerBase;
class UMissionObjective;
class UMission;
class UMissionRewardData;
class UMissionObjectiveSet;
class UTravelLocationData;
class UMissionPhase;
class UChallenge;
class UDialogScriptData;

UCLASS(Blueprintable)
class GBXMISSION_API UMission : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    AMissionTrackerBase* MissionTrackerBase;
    
    UPROPERTY(EditAnywhere)
    bool bAllowAutomaticDebugActivation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGbxUIFormattedText FormattedMissionName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGbxUIFormattedText PreAcceptanceSummary;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGbxUIFormattedText PostAcceptanceSummary;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bImmediatelyAdvanceToFirstSet;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseImmediatelyAdvanceToFirstSet;
    
    UPROPERTY()
    bool bImmediatelyAdvanceToFirstSetIfNotInMissionLevel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAutoPlayKickoff;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseAutoPlayKickoff;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bPlotCritical;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRepeatable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SecondsToComplete;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bFailOnTimerExpiration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bOnlyDisplayTimer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UMissionRewardData* RewardData;
    
    UPROPERTY(VisibleAnywhere)
    bool bDependencyViewDummy;
    
    UPROPERTY(EditAnywhere)
    bool bIsFirstPlotMission;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftClassPtr<UMission>> MissionDependencies;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMissionObjectiveDependency ObjectiveDependency;
    
    UPROPERTY(BlueprintReadOnly, DuplicateTransient, VisibleAnywhere)
    TArray<UMissionObjectiveSet*> ObjectiveSets;
    
    UPROPERTY(BlueprintReadOnly, DuplicateTransient, VisibleAnywhere)
    TArray<UMissionObjective*> Objectives;
    
    UPROPERTY(BlueprintReadOnly, DuplicateTransient, VisibleAnywhere)
    TArray<FMissionObjectiveChain> ObjectiveChains;
    
    UPROPERTY(BlueprintReadOnly, DuplicateTransient, VisibleAnywhere)
    TArray<UMissionPhase*> MissionPhases;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UChallenge> MissionChallenge;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bFailOnTravel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionObjectiveSet* StartCriticalSectionSet;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionObjectiveSet* StopCriticalSectionSet;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bGlobalMissionBlocker;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftClassPtr<UMission>> BlockedMissions;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionObjectiveSet* StartBlockingSet;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionObjectiveSet* StopBlockingSet;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FDialogConversation KickoffConversation;
    
    UPROPERTY(EditAnywhere)
    int32 ActivityPriority;
    
    UPROPERTY(EditAnywhere)
    bool bIsHidden;
    
private:
    UPROPERTY(EditAnywhere)
    FGbxUIFormattedText Description;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTravelLocationData> TravelStation;
    
    UPROPERTY(EditAnywhere)
    bool bActivateMissionDialogScriptInAnyMap;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UDialogScriptData> MissionActivationDialogScript;
    
    UPROPERTY(EditAnywhere)
    FDialogTimeSlotReference KickoffDialog;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UMission> NextMissionInChain;
    
    UPROPERTY(VisibleAnywhere)
    TSoftClassPtr<UMissionGraph> AssociatedMissionGraph;
    
    UPROPERTY()
    FString CookedActivityObjectId;
    
public:
    UMission();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UpdateObjective(UMissionObjective* Objective, UObject* Context, uint8 Amount);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UnpauseObjectiveChain(UMissionObjective* Objective);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ThwartObjectiveAndAdvanceObjectiveSet(UMissionObjective* ObjectiveToThwart, UMissionObjectiveSet* ObjectiveSet, bool bJumpToSet);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopMissionTimer();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartMissionTimer();
    
    UFUNCTION(BlueprintImplementableEvent)
    void MissionTimerExpired();
    
    UFUNCTION(BlueprintCallable)
    bool MissionRemoteEvent(FName EventName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void MissionNotStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void MissionKickoff();
    
    UFUNCTION(BlueprintCallable)
    bool MissionGameModeEvent(FName EventName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void MissionFailed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void MissionCompleteLoad();
    
    UFUNCTION(BlueprintImplementableEvent)
    void MissionComplete();
    
    UFUNCTION(BlueprintImplementableEvent)
    void MissionActiveLoad();
    
    UFUNCTION(BlueprintImplementableEvent)
    void MissionActive();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void JumpToObjectiveSet(UMissionObjectiveSet* ObjectiveSet, bool bIsBranchingMission);
    
    UFUNCTION()
    void GetPausableChainedObjectivesList(TArray<UMissionObjective*>& ObjectivesList) const;
    
    UFUNCTION()
    void GetObjectivesList(TArray<UMissionObjective*>& ObjectivesList) const;
    
    UFUNCTION()
    void GetObjectiveSetsList(TArray<UMissionObjectiveSet*>& ObjectiveSetsList) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 GetMissionRemainingSeconds();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void FailMission();
    
    UFUNCTION(BlueprintCallable)
    void EndKickoff();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void CompleteMission();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ClearObjective(UMissionObjective* Objective);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AdvanceObjectiveSet(UMissionObjectiveSet* ObjectiveSet);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddTimeToMission(int32 SecondsToAdd);
    
    UFUNCTION(BlueprintCallable)
    void ActivateMission(UMissionObjectiveSet* InitialObjectiveSet, bool bSetAsTrackedMission);
    
};

