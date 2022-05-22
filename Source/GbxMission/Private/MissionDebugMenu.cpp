#include "MissionDebugMenu.h"

class UMission;

void UMissionDebugMenu::SelectMissionGraph(const FName& MissionGraphId) {
}

void UMissionDebugMenu::NotifyMissionActivationCheatStart() const {
}

void UMissionDebugMenu::GetObjectiveSetItemsForMission(const FName& MissionId, TArray<FGbxCascadingListItemData>& OutItems) const {
}

UMission* UMissionDebugMenu::GetMissionWithId(const FName& MissionId) const {
    return NULL;
}

TEnumAsByte<EMissionStatus> UMissionDebugMenu::GetMissionStatus(const FName& MissionId) const {
    return MS_NotStarted;
}

void UMissionDebugMenu::GetItemsForMissionStatus(TEnumAsByte<EMissionDebugStatus> Status, TArray<FGbxCascadingListItemData>& OutItems) {
}

void UMissionDebugMenu::GetItemsForMissionGraph(TArray<FGbxCascadingListItemData>& OutItems) {
}

void UMissionDebugMenu::CompleteMission(const FName& MissionId) {
}

void UMissionDebugMenu::AdvanceToObjectiveSet(const FName& MissionId, const FName& ObjectiveSetId) {
}

void UMissionDebugMenu::AdvanceMission(const FName& MissionId) {
}

UMissionDebugMenu::UMissionDebugMenu() {
    this->MissionGraphToUse = NULL;
    this->bDisplayObjectName = false;
}

