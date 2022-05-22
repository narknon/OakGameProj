#include "MissionDirectorComponent.h"
#include "Templates/SubclassOf.h"

class UMission;

void UMissionDirectorComponent::IsAnyMissionAvailable(TEnumAsByte<EMissionAvailableResult>& OutResult) {
}

void UMissionDirectorComponent::IsAnyMissionActive(TEnumAsByte<EMissionActiveResult>& OutResult) {
}

void UMissionDirectorComponent::GetAllMissions(TArray<TSubclassOf<UMission>>& AllMissions) {
}

void UMissionDirectorComponent::ClearMissions() {
}

void UMissionDirectorComponent::AddMission(TSubclassOf<UMission> InMission) {
}

void UMissionDirectorComponent::ActivateAvailableMission() {
}

UMissionDirectorComponent::UMissionDirectorComponent() {
    this->MissionDirectorEnableCondition = NULL;
}

