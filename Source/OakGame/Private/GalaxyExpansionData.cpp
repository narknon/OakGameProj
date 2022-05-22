#include "GalaxyExpansionData.h"

UClass* UGalaxyExpansionData::GetRequiredInterface() {
    return NULL;
}

bool UGalaxyExpansionData::EnabledConditionRequiresNativeClass() {
    return false;
}

UGalaxyExpansionData::UGalaxyExpansionData() {
    this->WaypointEnabledCondition = NULL;
    this->DropPodWaypointEnabledCondition = NULL;
}

