#include "OwnedActionAbilityActor.h"
#include "Net/UnrealNetwork.h"

void AOwnedActionAbilityActor::ReleaseFromActionAbility() {
}


void AOwnedActionAbilityActor::OnRep_IsShuttingDown() {
}


void AOwnedActionAbilityActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOwnedActionAbilityActor, OwnerActionAbility);
    DOREPLIFETIME(AOwnedActionAbilityActor, OwnerPlayer);
    DOREPLIFETIME(AOwnedActionAbilityActor, bIsShuttingDown);
}

AOwnedActionAbilityActor::AOwnedActionAbilityActor() {
    this->bBlocksActionAbilityShutdown = false;
    this->OwnerActionAbility = NULL;
    this->OwnerPlayer = NULL;
    this->bIsShuttingDown = false;
}

