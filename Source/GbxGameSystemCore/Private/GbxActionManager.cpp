#include "GbxActionManager.h"
#include "Net/UnrealNetwork.h"

void AGbxActionManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGbxActionManager, ActionRepWrapper);
}

AGbxActionManager::AGbxActionManager() {
}

