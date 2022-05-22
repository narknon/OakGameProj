#include "MissionObserverComponent.h"
#include "Templates/SubclassOf.h"

class UMission;
class UObject;

void UMissionObserverComponent::ObserverMission(TSubclassOf<UMission> MissionClass) {
}

bool UMissionObserverComponent::GetUpdateEventObject(TArray<UObject*>& OutMissionInitialized, TArray<UObject*>& OutMissionUpdate, TArray<UObject*>& OutMissionObjectiveUpdate, TArray<UObject*>& OutMissionObjectiveSetUpdate) {
    return false;
}

UMissionObserverComponent::UMissionObserverComponent() {
    this->ObjectiveBit = 0;
    this->NumberOfObjectiveBits = 0;
    this->bEnableObjectiveBit = false;
}

