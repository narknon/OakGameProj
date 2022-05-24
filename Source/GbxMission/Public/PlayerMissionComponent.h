#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "MissionDataChangedDelegate.h"
#include "EMissionStatus.h"
#include "MissionPlaythroughData.h"
#include "PlayerMissionComponent.generated.h"

class AMissionTracker;
class UMission;
class UMissionObjectiveSet;
class UMissionObjective;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXMISSION_API UPlayerMissionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FMissionDataChanged OnMissionDataChanged;
    
protected:
    UPROPERTY()
    TArray<FMissionPlaythroughData> MissionPlaythroughs;
    
private:
    UPROPERTY(Transient)
    AMissionTracker* CachedMissionTracker;
    
public:
    UPlayerMissionComponent();
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTrackPreviousActiveMissionInList();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTrackNextActiveMissionInList();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetTrackedMission(TSubclassOf<UMission> MissionClass);
    
    UFUNCTION(Client, Reliable)
    void ClientUpdateMissionStatus(TSubclassOf<UMission> MissionClass, TEnumAsByte<EMissionStatus> Status);
    
    UFUNCTION(Client, Reliable)
    void ClientUpdateActiveObjectiveSet(TSubclassOf<UMission> MissionClass, UMissionObjectiveSet* ActiveObjectiveSet, const TArray<UMissionObjective*>& DormantObjectives);
    
    UFUNCTION(Client, Reliable)
    void ClientTrackedMissionChanged(TSubclassOf<UMission> MissionClass);
    
    UFUNCTION(Client, Reliable)
    void ClientObjectiveUpdated(TSubclassOf<UMission> MissionClass, UMissionObjective* UpdatedObjective, uint32 ObjectiveBit, uint8 Amount);
    
    UFUNCTION(Client, Reliable)
    void ClientObjectiveSetCompleted(TSubclassOf<UMission> MissionClass, UMissionObjectiveSet* CompletedObjectiveSet);
    
    UFUNCTION(Client, Reliable)
    void ClientObjectiveCleared(TSubclassOf<UMission> MissionClass, UMissionObjective* ClearedObjective);
    
    UFUNCTION(Client, Reliable)
    void ClientObjectiveChainUnpaused(TSubclassOf<UMission> MissionClass, UMissionObjective* Objective);
    
    UFUNCTION(Client, Reliable)
    void ClientMissionTimerStopped(TSubclassOf<UMission> MissionClass);
    
    UFUNCTION(Client, Reliable)
    void ClientMissionTimerStarted(TSubclassOf<UMission> MissionClass);
    
    UFUNCTION(Client, Reliable)
    void ClientMissionTimerChanged(TSubclassOf<UMission> MissionClass, float SecondsToAdd);
    
    UFUNCTION(Client, Reliable)
    void ClientMissionRegistered(TSubclassOf<UMission> MissionClass);
    
    UFUNCTION(Client, Reliable)
    void ClientDormantObjectiveRemoved(TSubclassOf<UMission> MissionClass, UMissionObjective* Objective, bool bIssueActiveEvent);
    
    UFUNCTION(Client, Reliable)
    void ClientDormantObjectiveAdded(TSubclassOf<UMission> MissionClass, UMissionObjective* Objective);
    
};

