#include "Mission.h"

class UMissionObjective;
class UObject;
class UMissionObjectiveSet;

void UMission::UpdateObjective(UMissionObjective* Objective, UObject* Context, uint8 Amount) {
}

void UMission::UnpauseObjectiveChain(UMissionObjective* Objective) {
}

void UMission::ThwartObjectiveAndAdvanceObjectiveSet(UMissionObjective* ObjectiveToThwart, UMissionObjectiveSet* ObjectiveSet, bool bJumpToSet) {
}

void UMission::StopMissionTimer() {
}

void UMission::StartMissionTimer() {
}


bool UMission::MissionRemoteEvent(FName EventName) {
    return false;
}



bool UMission::MissionGameModeEvent(FName EventName) {
    return false;
}






void UMission::JumpToObjectiveSet(UMissionObjectiveSet* ObjectiveSet, bool bIsBranchingMission) {
}

void UMission::GetPausableChainedObjectivesList(TArray<UMissionObjective*>& ObjectivesList) const {
}

void UMission::GetObjectivesList(TArray<UMissionObjective*>& ObjectivesList) const {
}

void UMission::GetObjectiveSetsList(TArray<UMissionObjectiveSet*>& ObjectiveSetsList) const {
}

int32 UMission::GetMissionRemainingSeconds() {
    return 0;
}

void UMission::FailMission() {
}

void UMission::EndKickoff() {
}

void UMission::CompleteMission() {
}

void UMission::ClearObjective(UMissionObjective* Objective) {
}

void UMission::AdvanceObjectiveSet(UMissionObjectiveSet* ObjectiveSet) {
}

void UMission::AddTimeToMission(int32 SecondsToAdd) {
}

void UMission::ActivateMission(UMissionObjectiveSet* InitialObjectiveSet, bool bSetAsTrackedMission) {
}

UMission::UMission() {
    this->MissionTrackerBase = NULL;
    this->bAllowAutomaticDebugActivation = false;
    this->bImmediatelyAdvanceToFirstSet = false;
    this->bUseImmediatelyAdvanceToFirstSet = false;
    this->bImmediatelyAdvanceToFirstSetIfNotInMissionLevel = false;
    this->bAutoPlayKickoff = false;
    this->bUseAutoPlayKickoff = false;
    this->bPlotCritical = false;
    this->bRepeatable = false;
    this->SecondsToComplete = 0;
    this->bFailOnTimerExpiration = true;
    this->bOnlyDisplayTimer = false;
    this->RewardData = NULL;
    this->bDependencyViewDummy = false;
    this->bIsFirstPlotMission = false;
    this->MissionChallenge = NULL;
    this->bFailOnTravel = false;
    this->StartCriticalSectionSet = NULL;
    this->StopCriticalSectionSet = NULL;
    this->bGlobalMissionBlocker = false;
    this->StartBlockingSet = NULL;
    this->StopBlockingSet = NULL;
    this->ActivityPriority = 0;
    this->bIsHidden = false;
    this->bActivateMissionDialogScriptInAnyMap = false;
}

