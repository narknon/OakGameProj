#include "OakActionAbility_GRMLN.h"
#include "Net/UnrealNetwork.h"



void UOakActionAbility_GRMLN::SpawnPrimaryDrone() {
}

void UOakActionAbility_GRMLN::ServerStopCalledShot_Implementation() {
}
bool UOakActionAbility_GRMLN::ServerStopCalledShot_Validate() {
    return true;
}

void UOakActionAbility_GRMLN::ServerStartCalledShot_Implementation() {
}
bool UOakActionAbility_GRMLN::ServerStartCalledShot_Validate() {
    return true;
}

void UOakActionAbility_GRMLN::ServerFindNewDroneTarget_Implementation() {
}
bool UOakActionAbility_GRMLN::ServerFindNewDroneTarget_Validate() {
    return true;
}




bool UOakActionAbility_GRMLN::IsSafeguardProtocolActive() const {
    return false;
}

bool UOakActionAbility_GRMLN::HasGRMLNMod(EGRMLNModType InModType) const {
    return false;
}


void UOakActionAbility_GRMLN::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOakActionAbility_GRMLN, PrimaryDrone);
    DOREPLIFETIME(UOakActionAbility_GRMLN, RuntimeMods);
}

UOakActionAbility_GRMLN::UOakActionAbility_GRMLN() {
    this->CommandRingClass = NULL;
    this->PrimaryDrone = NULL;
    this->CommandRing = NULL;
}

