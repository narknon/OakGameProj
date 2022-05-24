#include "PlayerMissionComponent.h"
#include "Templates/SubclassOf.h"

class UMission;
class UMissionObjectiveSet;
class UMissionObjective;

void UPlayerMissionComponent::ServerTrackPreviousActiveMissionInList_Implementation() {
}
bool UPlayerMissionComponent::ServerTrackPreviousActiveMissionInList_Validate() {
    return true;
}

void UPlayerMissionComponent::ServerTrackNextActiveMissionInList_Implementation() {
}
bool UPlayerMissionComponent::ServerTrackNextActiveMissionInList_Validate() {
    return true;
}

void UPlayerMissionComponent::ServerSetTrackedMission_Implementation(TSubclassOf<UMission> MissionClass) {
}
bool UPlayerMissionComponent::ServerSetTrackedMission_Validate(TSubclassOf<UMission> MissionClass) {
    return true;
}

void UPlayerMissionComponent::ClientUpdateMissionStatus_Implementation(TSubclassOf<UMission> MissionClass, TEnumAsByte<EMissionStatus> Status) {
}

void UPlayerMissionComponent::ClientUpdateActiveObjectiveSet_Implementation(TSubclassOf<UMission> MissionClass, UMissionObjectiveSet* ActiveObjectiveSet, const TArray<UMissionObjective*>& DormantObjectives) {
}

void UPlayerMissionComponent::ClientTrackedMissionChanged_Implementation(TSubclassOf<UMission> MissionClass) {
}

void UPlayerMissionComponent::ClientObjectiveUpdated_Implementation(TSubclassOf<UMission> MissionClass, UMissionObjective* UpdatedObjective, uint32 ObjectiveBit, uint8 Amount) {
}

void UPlayerMissionComponent::ClientObjectiveSetCompleted_Implementation(TSubclassOf<UMission> MissionClass, UMissionObjectiveSet* CompletedObjectiveSet) {
}

void UPlayerMissionComponent::ClientObjectiveCleared_Implementation(TSubclassOf<UMission> MissionClass, UMissionObjective* ClearedObjective) {
}

void UPlayerMissionComponent::ClientObjectiveChainUnpaused_Implementation(TSubclassOf<UMission> MissionClass, UMissionObjective* Objective) {
}

void UPlayerMissionComponent::ClientMissionTimerStopped_Implementation(TSubclassOf<UMission> MissionClass) {
}

void UPlayerMissionComponent::ClientMissionTimerStarted_Implementation(TSubclassOf<UMission> MissionClass) {
}

void UPlayerMissionComponent::ClientMissionTimerChanged_Implementation(TSubclassOf<UMission> MissionClass, float SecondsToAdd) {
}

void UPlayerMissionComponent::ClientMissionRegistered_Implementation(TSubclassOf<UMission> MissionClass) {
}

void UPlayerMissionComponent::ClientDormantObjectiveRemoved_Implementation(TSubclassOf<UMission> MissionClass, UMissionObjective* Objective, bool bIssueActiveEvent) {
}

void UPlayerMissionComponent::ClientDormantObjectiveAdded_Implementation(TSubclassOf<UMission> MissionClass, UMissionObjective* Objective) {
}

UPlayerMissionComponent::UPlayerMissionComponent() {
    this->CachedMissionTracker = NULL;
}

