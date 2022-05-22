#include "GearUpRespawnStation.h"
#include "Net/UnrealNetwork.h"

void AGearUpRespawnStation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGearUpRespawnStation, bAlreadyUsed);
}

AGearUpRespawnStation::AGearUpRespawnStation() {
    this->bAlreadyUsed = false;
}

