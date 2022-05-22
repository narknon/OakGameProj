#include "OakMissionWeaponComponent.h"
#include "Net/UnrealNetwork.h"

void UOakMissionWeaponComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOakMissionWeaponComponent, MissionClass);
    DOREPLIFETIME(UOakMissionWeaponComponent, Objectives);
}

UOakMissionWeaponComponent::UOakMissionWeaponComponent() {
    this->MissionClass = NULL;
}

