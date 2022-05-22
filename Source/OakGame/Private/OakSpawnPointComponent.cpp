#include "OakSpawnPointComponent.h"

UClass* UOakSpawnPointComponent::GetRequiredInterface() {
    return NULL;
}

UOakSpawnPointComponent::UOakSpawnPointComponent() {
    this->OnMissionLoadedEnabledCondition = NULL;
    this->SpecialEffect = NULL;
}

